# Progress

Target: Drill Dozer (USA) `V49E`, SHA1 `c1058cc2482b91204100cc8515da99aeb06773f5`

The maintainer keeps this file; contributors don't edit it. The hourly "Expire claims"
workflow keeps the line below current (`python3 tools/pool.py progress --write`); leave the
markers in place.

<!-- progress:start -->
180 / 1014024 bytes solved (0.02%), 41 / 9227 functions
<!-- progress:end -->

## Setup (docs/NEW_PROJECT.md)

- [x] Repository created from the template, tools installed, tool tests pass
- [x] Ghidra function list exported
- [x] Code region end found: 0x080FAB1C
- [x] `functions.csv` generated (9227 functions, 0x0800024C-0x080F8FB4), `rom_sha1` set
- [x] Boundaries fixed: two long-branch fake starts merged into 0x0808738C and 0x080894DC
- [x] Unsolvable rows removed (see Exceptions)
- [x] Library aliases in `pool.toml` (libgcc division, memcpy, memset, `_call_via_*`)
- [x] Functions matched locally
- [x] Repository configured and published
- [x] Loop tested: claim, solve, reject, release, expire
- [x] Fork PR tested (FacundoMainere/drill-dozer-decomp)

## Exceptions (removed from functions.csv)

| Range | What | Reason |
|---|---|---|
| 08000000-0800024C | ROM header, crt0 | Not code / ARM-mode startup |
| 080F5EE0-080F6E60 | m4a_1.s (sound driver) | Hand-written ARM asm |
| 080F86F0-080F8750 | BIOS SWI wrappers (`svc N; bx lr`) | Not expressible in C |
| 080F8964-080F8DE4 | SRAM save library | Built with different flags |
| 080F8FB4-080FAB1C | libgcc (`_call_via_*`, division), newlib | Hand-written asm / other flags |

## Log

- 2026-10-13: Pool created, loop tested end to end.
- 2026-10-14: 180 / 1014024 bytes solved (0.02%), 41 / 9227 functions (smallest first).
- 2026-10-14: First multi-agent run: 5 agents from one fork solved 40 functions (the 4-8 byte
  getters, setters and stubs, smallest first) and released 1, all through PRs, with no claims
  left open and no strikes. 08010DE0 is data, not a function; PR #82 fixes it and five other
  boundaries.
