#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll MOD = 1e9 + 7;

#ifdef LOCAL
#define dbg(x) cerr << #x << " = " << (x) << "\n"
#else
#define dbg(x)
#endif

void solve() {
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) solve();
}





#include <bits/stdc++.h>
// GCC-only "everything" header. Pulls in vector, algorithm, map,
// string, cmath, etc. in one line, so you're never stuck adding
// individual headers mid-contest.
//   Caveats:
//   - Not part of the C++ standard, so it won't compile on MSVC,
//     and often not on macOS's default clang/libc++ setup.
//   - Slower to compile than including only what you use, since
//     the compiler parses hundreds of headers every time.
//   Reliable on GCC-based judges (Codeforces, AtCoder); avoid in
//   real production code, where you include only what you use.

using namespace std;
// Lets you write vector, cout, sort instead of std::vector,
// std::cout, std::sort. Saves keystrokes in a contest; usually
// avoided in larger codebases since it can cause name clashes.

using ll = long long;
// Alias for a wider integer type (64-bit, up to ~9.2 * 10^18).
// Plain int overflows past ~2.147 billion (2^31 - 1), which is
// easy to hit -- e.g. n * n silently overflows when n = 1e5.
// Defaulting to ll for anything that might get large avoids one
// of the most common wrong-answer bugs in competitive programming.

const ll MOD = 1e9 + 7;
// A large prime that a huge fraction of problems ask you to take
// the answer modulo. Declaring it once avoids retyping (or
// mistyping) it in every modular add/multiply.
// 998244353 is the other common modulus -- mainly for problems
// involving NTT (Number Theoretic Transform) / convolution.

// const int INF = 1e9;
// Optional: a "large enough" sentinel, e.g. for uninitialized
// shortest-path distances. Prefer 1e9 over INT_MAX so that
// INF + something doesn't overflow.

#ifdef LOCAL
#define dbg(x) cerr << #x << " = " << (x) << "\n"
#else
#define dbg(x)
#endif
// A debug print that disappears on submission.
// "#x" stringizes the expression itself, so dbg(n) prints
// something like: n = 5
// Compile locally with -DLOCAL (e.g. `g++ -DLOCAL sol.cpp`) and
// the macro expands to a real print. Leave LOCAL undefined --
// which is what the judge will do -- and it expands to nothing,
// so you never have to hunt down and delete debug prints before
// submitting.

void solve() {
    // Per-test-case logic goes here.
    // e.g. dbg(n);  -> prints only when compiled with -DLOCAL

}
// Keeping this separate from main() is what makes the
// multi-test-case loop below a one-line addition, and it keeps
// each test case's local variables from leaking into the next.

int main() {
    ios::sync_with_stdio(false);
    // By default cin/cout stay synced with C's stdio (scanf/
    // printf) so the two can be safely mixed. That sync costs
    // time. Disabling it speeds up cin/cout noticeably on heavy
    // I/O -- but afterward, don't mix cin/cout with scanf/printf,
    // or output can come out in the wrong order.

    cin.tie(nullptr);
    // By default, every `cin >>` flushes cout first (that's why a
    // prompt appears before the program waits for input). Untying
    // skips that automatic flush, saving time with lots of
    // interleaved reads/writes. Rarely matters in contests, since
    // judge input is piped in rather than typed live.

    int t;
    cin >> t;
    // Most Codeforces-style problems open with "the first line
    // contains t, the number of test cases" -- read it once here.

    while (t--) solve();
    // Runs solve() exactly t times. For a single-test-case
    // problem, delete these two lines and just call solve()
    // directly.

    return 0;
    // Optional here specifically -- the standard guarantees an
    // implicit `return 0;` if main() falls off the end -- but
    // some people include it out of habit/clarity.
}

