# Bug Hunting Challenge - push_swap

A simplified stack implementation with 5 intentional bugs for event.

## Quick Start

```bash
make test      # Compile and run tests
make clean     # Remove object files
make fclean    # Remove all generated files
make re        # Rebuild everything
```

## Objectives

Find and fix all 5 bugs in the stack implementation. Each bug will cause a test to fail.

## Current Test Results

```
❌ FAIL: test_init_stack - capacity not set
❌ FAIL: test_push - value not stored
❌ FAIL: test_pop - size not decreased
❌ FAIL: test_swap - elements not swapped
❌ FAIL: test_is_sorted - should be sorted descending
```

## Challenge: Find the Bugs

### Bug #1: init_stack()
**Test:** test_init_stack fails

**Investigate:**
- Look at the `init_stack()` function in `push_swap.c`
- Check what the `capacity` parameter should do
- Why does the test expect `s.capacity` to equal 5?

### Bug #2: push()
**Test:** test_push fails

**Investigate:**
- Look at the `push()` function in `push_swap.c`
- Where is the value being stored?
- Should it be at `s->size` or `s->size + 1`?

### Bug #3: pop()
**Test:** test_pop fails

**Investigate:**
- Look at the `pop()` function in `push_swap.c`
- What should happen to `size` when popping?
- Why does the test expect `s.size == 1` after popping?

### Bug #4: swap()
**Test:** test_swap fails

**Investigate:**
- Look at the `swap()` function in `push_swap.c`
- What indices should be swapped?
- Is `s->size` a valid index for the stack?

### Bug #5: is_sorted()
**Test:** test_is_sorted fails

**Investigate:**
- Look at the `is_sorted()` function in `push_swap.c`
- What should it return: 1 for sorted, 0 for not sorted?
- Push values 5, 4, 3 - is this ascending or descending?
- What comparison operator should be used?

## Debugging Tips

1. **Run tests first:** `make test` - See which tests fail
2. **Read the test:** Look at the specific test function in `test.c`
3. **Trace the code:** Follow the function being tested
4. **Compare:** What the function does vs what the test expects
5. **Find the logic error:** Look for:
   - Wrong operators (< vs >)
   - Off-by-one errors
   - Missing operations
   - Unused parameters
   - Wrong return values

## Files Structure

```
.
├── push_swap.h      # Header file with struct and declarations
├── push_swap.c      # Implementation (contains 5 bugs)
├── test.c           # Test cases with color-coded output
├── Makefile         # Build system
└── README.md        # This file
```

## Good Luck!

When you find and fix all bugs, every test should show:

```
✅ PASS: test_init_stack
✅ PASS: test_push
✅ PASS: test_pop
✅ PASS: test_swap
✅ PASS: test_is_sorted
```
