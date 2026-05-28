# MISERY (Memory Isolated Security Execution & Runtime Yielding)

MISERY is a high-performance, lightweight memory isolation and security runtime utility written in modern C++. It acts as a strict execution engine that monitors running contexts, tracks simulation vectors, and isolates critical runtimes to prevent resource exhaustion or exploitation.

## Features
- **Isolated Memory Architecture:** Simulates secure memory execution paths to prevent overhead.
- **Strict Runtime Yielding:** Continuously analyzes the boundary of executed blocks.
- **Resource Analytics:** Provides time-stamped security summaries directly to the terminal.
- **Clean Architecture:** Fully written with explicit Allman-style formatting and encapsulated within custom namespaces.

## Usage
Run the executable with an optional integer value representing the allocated memory blocks (in MB) to simulate and isolate:
```bash
./misery 128
```
## Architecture & Style
MISERY strictly follows the **KISS** (Keep It Simple, Stupid) principle and is optimized for low memory usage. The codebase uses the Allman style for bracket alignment, ensuring high readability and seamless minification for single-line deployment architectures.

## License
This project is open-source and licensed under the **GNU GPL v3.0**. See the LICENSE file for details. All rights reserved by **hypernova-developer**. 
