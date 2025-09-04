#ifndef CPUMONITOR_H
#define CPUMONITOR_H
#define NOMINMAX
#include <windows.h>
#include <pdh.h>
#include <pdhmsg.h>
#pragma comment(lib, "pdh.lib")

class CpuMonitor
{
public:
public:
    CpuMonitor() {
        PdhOpenQuery(NULL, NULL, &query);
        PdhAddCounter(query, L"\\Processor(_Total)\\% Processor Time", NULL, &counter);
        PdhCollectQueryData(query);
    }

    ~CpuMonitor() {
        PdhCloseQuery(query);
    }
    bool initialized = false;
    PDH_HQUERY cpuQuery;
    PDH_HCOUNTER cpuTotal;


    void initCpuMonitor() {
        if (initialized) return;
        PdhOpenQuery(NULL, 0, &cpuQuery);
        PdhAddCounter(cpuQuery, L"\\Processor(_Total)\\% Processor Time", 0, &cpuTotal);
        PdhCollectQueryData(cpuQuery); // 初次采样
        initialized = true;
    }

    double getCpuUsage() {
        if (!initialized) initCpuMonitor();

        Sleep(1000); // 等待一秒采样间隔
        PdhCollectQueryData(cpuQuery);

        PDH_FMT_COUNTERVALUE counterVal;
        PdhGetFormattedCounterValue(cpuTotal, PDH_FMT_DOUBLE, NULL, &counterVal);
        return counterVal.doubleValue;
    }


private:
    PDH_HQUERY query;
    PDH_HCOUNTER counter;

};

#endif // CPUMONITOR_H
