# C++ Starter — 12-Week C++ Mastery Journey

[![C++ CI](https://github.com/BitwiseSynapse/cpp-starter/actions/workflows/build.yml/badge.svg)](https://github.com/BitwiseSynapse/cpp-starter/actions/workflows/build.yml)

## 📌 About This Repo
This is the **foundation repository** for my 12-week C++ mastery journey.  
It’s not just a “Hello World?” — it’s a **reusable, production-grade starter** with:

- **CMake + Ninja** build system  
- **vcpkg** dependency management  
- **GoogleTest** unit testing  
- **AddressSanitizer** enabled in Debug builds  
- **clang-tidy / cppcheck / MSVC analyzers** for static analysis  
- **Cross-platform CI** (Windows, macOS, Linux) via GitHub Actions  

Every project I do in the next 12 weeks will **build on top of this exact setup** — no more wasting time configuring tools per-project.

---

## 🎯 Why This Exists
Instead of creating throwaway repos, I’m keeping **one evolving repository** that grows with my skills.  

This ensures:  
- Consistent build + test workflow across projects  
- CI validation before merging anything  
- A running history of my learning and progress  

---

## ⚡ Quick Start  
Clone this repo:  
```bash
git clone https://github.com/BitwiseSynapse/cpp-starter.git
cd cpp-starter

# Install dependencies via vcpkg:
# Windows PowerShell
& $Env:USERPROFILE\vcpkg\vcpkg.exe install gtest

# Build + run tests:
cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Debug -DCMAKE_TOOLCHAIN_FILE=$Env:USERPROFILE\vcpkg\scripts\buildsystems\vcpkg.cmake
cmake --build build
ctest --test-dir build -C Debug --output-on-failure
```

## 📅 12-Week C++ Mastery Plan
### Overall Rhythm
- **Mon–Fri:** 45–90 min focused coding session
  - Pull latest changes
  - Create a new branch for the day’s task
  - Code + write tests
  - Run sanitizers + static analysis
  - Commit + push
  - CI must go green before merging
- **Saturday:** Review week’s work, refactor, document
- **Sunday:** Rest

Everything happens in **one evolving repo** that grows week-by-week — no starting over.

---

### Week-by-Week Breakdown

#### **Week 1 — Modern Basics I**
- Functions, I/O, ranges
- Write & test small programs daily
- Learn to use `std::ranges` for clean iteration
- CI: Ensure builds pass across compilers

#### **Week 2 — Modern Basics II**
- Headers, const correctness, `optional` and `string_view`
- Begin refactoring starter code into header/source separation
- Add unit tests for edge cases

#### **Week 3 — STL & Algorithms**
- Master `std::vector`, `std::map`, `std::set`, `std::unordered_map`
- Use algorithms like `transform`, `reduce`, `accumulate`
- CI: Add more warnings and treat warnings as errors

#### **Week 4 — RAII & Lifetimes**
- Learn RAII principles (constructors, destructors)
- Manage resources with smart pointers (`unique_ptr`, `shared_ptr`)
- Add tests to confirm no leaks or invalid access

#### **Week 5 — Move Semantics**
- Implement move constructor and move assignment
- Measure performance differences with/without moves
- CI: Add AddressSanitizer for all builds

#### **Week 6 — Templates I**
- Function and class templates
- Type deduction, template specialization
- Test templates with multiple data types

#### **Week 7 — Concepts & APIs**
- Use C++20 concepts to constrain templates
- Build a small API with clear contracts
- Document your API in `README.md`

#### **Week 8 — Concurrency I**
- Threads, `std::async`, `std::future`
- Race conditions & mutexes
- Add ThreadSanitizer to CI for Linux builds

#### **Week 9 — Concurrency II + Performance**
- Profiling basics
- Lock-free data structures
- Use performance benchmarks (Google Benchmark)

#### **Week 10 — I/O, JSON, Networking**
- File I/O with `fstream`
- Parse and serialize JSON (e.g., `nlohmann/json`)
- Basic TCP client/server using ASIO

#### **Week 11 — Hardening & Packaging**
- Error handling patterns
- Assertions vs exceptions
- Package your project with CMake install rules

#### **Week 12 — Capstone & Release**
- Final project using everything learned
- Tag v1.0 release on GitHub
- Ensure CI/CD produces downloadable artifacts

---

**💡 Reminder:**  
This plan is executed entirely in this single repository.  
Each week builds on the last, so by Week 12 you’ll have a polished, production-quality C++ codebase plus a full record of your journey.
