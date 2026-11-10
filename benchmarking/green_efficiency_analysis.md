# Measurement Methodology

The performance analysis was conducted using the execution times recorded from the benchmarking programs provided in this project. Multiple runs were performed to obtain consistent measurements and reduce the impact of random variation.

For the baseline loop benchmark, the recorded execution times were 2.320965 seconds, 2.330352 seconds, and 2.336322 seconds across three runs. These measurements provide a reference point for understanding the computational cost of repeated operations.

For the algorithm comparison benchmark, both the naive algorithm and the optimized single-pass algorithm were executed three times. The naive algorithm required 2.770645 seconds, 2.780176 seconds, and 2.772705 seconds respectively. The single-pass algorithm required only 0.000105 seconds, 0.000108 seconds, and 0.000118 seconds respectively. The average runtime of the naive implementation was approximately 2.774509 seconds.

Additional instrumentation measurements showed the following execution times:

- TOTAL: 0.000751 seconds
- BUILD_DATA: 0.000291 seconds
- PROCESS: 0.000319 seconds
- REDUCE: 0.000135 seconds

All conclusions in this report are based on these recorded measurements.

# Observed Performance Differences

The collected results demonstrate a dramatic performance difference between the naive implementation and the single-pass implementation.

The naive algorithm consistently required about 2.77 seconds to complete execution. In contrast, the single-pass algorithm completed execution in approximately 0.00011 seconds. This means the optimized solution finished thousands of times faster than the naive version.

The observed difference indicates that algorithm design has a much larger impact on performance than minor implementation details. By reducing redundant processing and completing the task in a single traversal, the optimized algorithm significantly decreased runtime.

The instrumentation results also show that data processing consumed slightly more time than data construction and checksum reduction, although all three stages completed very quickly.

# Relation Between Runtime and Energy Consumption

Execution time is closely related to energy consumption because computer processors consume power while executing instructions.

The naive algorithm remained active for approximately 2.77 seconds during each run, while the single-pass algorithm completed its work in approximately 0.00011 seconds. Since the processor spends less time performing calculations when running the optimized version, the total energy required is expected to be lower.

Although this experiment did not directly measure power usage with specialized hardware, the large reduction in runtime strongly suggests improved energy efficiency. Reducing unnecessary computation is therefore beneficial not only for performance but also for sustainable and environmentally conscious software development.

# Limitations of the Experiment

Several limitations should be considered when interpreting these results.

First, all measurements were collected on a single system and under a specific operating environment. Different hardware configurations could produce different execution times.

Second, background operating system activity may influence timing measurements. Minor variations between runs are visible in the collected data and likely result from normal system behavior.

Third, energy consumption was inferred from execution time rather than measured directly using dedicated power-monitoring equipment. Therefore, conclusions regarding energy efficiency are estimates based on runtime observations.

# Practical Engineering Takeaway

The experiment clearly demonstrates the importance of algorithmic efficiency in software engineering.

The optimized single-pass algorithm achieved the same objective while requiring only a tiny fraction of the execution time used by the naive implementation. This improvement can lead to better application responsiveness, reduced hardware utilization, and lower energy consumption.

A practical lesson from this analysis is that engineers should evaluate algorithmic complexity early in the development process. Eliminating unnecessary work and selecting efficient approaches can provide substantial performance gains without requiring additional hardware resources.
