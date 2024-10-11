#ifndef _HELPER_H
#define _HELPER_H

// TODO(Karsten): Extract to Math package
#define ArrayCount(A) (sizeof(A) / sizeof((A)[0]))

// Assertion helper
#define Statement(S) do { S } while(false);

#define AssertBreak() __builtin_trap();

#if ASSERT_ENABLED
#define Assert(C) if (!(C)) { Statement(AssertBreak()) }
#else
#define Assert(C)
#endif

#endif // _HELPER_H
