# C++ Starter — 12-Week C++ Mastery Journey
[![CI (Windows)](https://github.com/BitwiseSynapse/cpp-starter/actions/workflows/ci-windows.yml/badge.svg)](https://github.com/BitwiseSynapse/cpp-starter/actions/workflows/ci-windows.yml) [![CI (Ubuntu)](https://github.com/BitwiseSynapse/cpp-starter/actions/workflows/ci-ubuntu.yml/badge.svg)](https://github.com/BitwiseSynapse/cpp-starter/actions/workflows/ci-ubuntu.yml) [![CI (macOS)](https://github.com/BitwiseSynapse/cpp-starter/actions/workflows/ci-macos.yml/badge.svg)](https://github.com/BitwiseSynapse/cpp-starter/actions/workflows/ci-macos.yml)
## 📌 About This Repo
This is the foundation repository for my 12-week C++ mastery journey. It’s not just a “Hello World?” — it’s a reusable, production-grade starter with:
- **CMake + Ninja** build system
- **vcpkg** dependency management
- **GoogleTest** unit testing
- **AddressSanitizer** enabled in Debug builds
- **clang-tidy / cppcheck / MSVC analyzers** for static analysis
- **Cross-platform CI** (Windows, macOS, Linux) via GitHub Actions  
Every project I do in the next 12 weeks will build on top of this exact setup — no more wasting time configuring tools per-project.
## 🎯 Why This Exists
Instead of creating throwaway repos, I’m keeping **one evolving repository** that grows with my skills. This ensures:
- Consistent build + test workflow across projects
- CI validation before merging anything
- A running history of my learning and progress
## 🔧 Build & Test
**Prereq (Windows PowerShell):**
```pwsh
& $Env:USERPROFILE\vcpkg\vcpkg.exe install gtest
```
**Configure & build (any OS with CMake + Ninja):**
```bash
cmake --preset msvc-debug
cmake --build --preset build
ctest --preset test --output-on-failure
```
**Supported:** Windows, Ubuntu, macOS (see badges above).
## 📂 Repo Layout
```txt
.
├─ src/               # app/library code
├─ tests/             # GoogleTest unit tests
├─ CMakeLists.txt     # top-level build
├─ CMakePresets.json
├─ vcpkg.json         # deps (manifest mode)
└─ .github/workflows/ # CI (Win/Ubuntu/macOS)
```
## 🧭 How I Work (lightweight)
- Short branches: `feat/...`, `fix/...`, `exp/...`
- Small commits with clear messages (e.g., `feat: add range-based sum`)
- Open PR → let CI pass → squash merge to `main`
- Goal: keep `main` always green ✅
## 🧹 Code Quality
- **Format:**
```bash
clang-format -i src/**/*.cpp tests/**/*.cpp
```
- **Static checks:**
```bash
clang-tidy src/main.cpp -- -std=c++20
```
- **Sanitizers:** AddressSanitizer enabled in Debug (see CMakeLists)
## 🗺 Roadmap (12-Week Plan)
This repo evolves week-by-week (STL, RAII, moves, templates, concepts, concurrency, I/O, packaging, capstone). See “12-Week C++ Mastery Plan” below for the schedule.
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
## 📚 Learning Resources

**Books**
- *A Tour of C++ (3rd Edition)* — Bjarne Stroustrup
- *Effective Modern C++* — Scott Meyers
- *C++20: The Complete Guide* — Nicolai Josuttis
- *C++ Crash Course* - Josh Lospinoso

**Videos & Talks**
- [CppCon YouTube Playlist](https://www.youtube.com/user/CppCon)
- [C++ Weekly (Jason Turner)](https://www.youtube.com/c/cppweekly)
  
**Exercises**
- [Exercism C++ Track](https://exercism.org/tracks/cpp)
- [Advent of Code](https://adventofcode.com/)
- [Project Euler](https://projecteuler.net/)

## ⚖️ License
MIT — see `LICENSE`.

*Everything happens inside this single evolving repo so the entire history of learning, projects, and tooling stays in one place.*
