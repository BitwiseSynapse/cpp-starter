# C++ Starter — 12-Week C++ Mastery Journey

[![Windows](https://img.shields.io/github/actions/workflow/status/BitwiseSynapse/cpp-starter/build.yml?branch=main&label=Windows&logo=windows&logoColor=white)](https://github.com/BitwiseSynapse/cpp-starter/actions/workflows/build.yml)
[![Ubuntu](https://img.shields.io/github/actions/workflow/status/BitwiseSynapse/cpp-starter/build.yml?branch=main&label=Ubuntu&logo=ubuntu&logoColor=white&color=E95420)](https://github.com/BitwiseSynapse/cpp-starter/actions/workflows/build.yml)
[![macOS](https://img.shields.io/github/actions/workflow/status/BitwiseSynapse/cpp-starter/build.yml?branch=main&label=macOS&logo=apple&logoColor=white&color=000000)](https://github.com/BitwiseSynapse/cpp-starter/actions/workflows/build.yml)

## 📌 About This Repo
This is the foundation repository for my 12-week C++ mastery journey.
It’s not just a “Hello World?” — it’s a reusable, production-grade starter with:

- **CMake + Ninja** build system  
- **vcpkg** dependency management  
- **GoogleTest** unit testing  
- **AddressSanitizer** enabled in Debug builds  
- **clang-tidy / cppcheck / MSVC analyzers** for static analysis  
- **Cross-platform CI** (Windows, macOS, Linux) via GitHub Actions  

Every project I do in the next 12 weeks will build on top of this exact setup — no more wasting time configuring tools per-project.

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
- **Mon–Fri: 45–90 min focused coding session
  - Review 2–5 pages from a book or 1 short video segment.
  - Pull latest changes, create a new branch for the day’s task.
  - Code + write tests for the topic of the week.
  - Run sanitizers + static analysis
  - Commit + push — CI must go green before merging.
  - CI must go green before merging
- **Saturday:** Review week’s work, refactor, document, revisit theory.
- **Sunday:** Rest or light reading.

---

## 📅 12-Week C++ Mastery Plan

### Overall Rhythm
- **Mon–Fri:** 45–90 min focused coding session  
  1. Review 2–5 pages from a book or 1 short video segment.  
  2. Pull latest changes, create a new branch for the day’s task.  
  3. Code + write tests for the topic of the week.  
  4. Run sanitizers + static analysis.  
  5. Commit + push — CI must go green before merging.  
- **Saturday (1–2 hrs):** Review week’s work, refactor, document, revisit theory.  
- **Sunday:** Rest or light reading.

### Week-by-Week Topics
1. **Modern Basics I** — Functions, I/O, ranges  
2. **Modern Basics II** — Headers, const correctness, `optional`, `string_view`  
3. **STL & Algorithms** — Containers, `transform`, `reduce`, `accumulate`  
4. **RAII & Lifetimes** — Constructors/destructors, smart pointers  
5. **Move Semantics** — Move constructors/assignment, perf gains  
6. **Templates I** — Function/class templates, specialization  
7. **Concepts & APIs** — C++20 concepts, building clean APIs  
8. **Concurrency I** — Threads, `std::async`, mutexes, race conditions  
9. **Concurrency II + Performance** — Profiling, lock-free data structures  
10. **I/O, JSON, Networking** — File I/O, `nlohmann/json`, ASIO basics  
11. **Hardening & Packaging** — Error handling, CMake install rules  
12. **Capstone & Release** — Final project, GitHub release with artifacts  

---

## 📚 Learning Resources

**Books**
- *A Tour of C++ (3rd Edition)* — Bjarne Stroustrup  
- *Effective Modern C++* — Scott Meyers  
- *C++20: The Complete Guide* — Nicolai Josuttis  

**Videos & Talks**
- [CppCon YouTube Playlist](https://www.youtube.com/user/CppCon)  
- [C++ Weekly (Jason Turner)](https://www.youtube.com/c/cppweekly)  

**Exercises**
- [Exercism C++ Track](https://exercism.org/tracks/cpp)  
- [Advent of Code](https://adventofcode.com/)  
- [Project Euler](https://projecteuler.net/)  

---

✅ *Everything happens inside this single evolving repo so the entire history of learning, projects, and tooling stays in one place.*
