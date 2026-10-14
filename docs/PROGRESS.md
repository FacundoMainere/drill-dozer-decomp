# Progress

Target: Drill Dozer (USA) `V49E`, SHA1 `c1058cc2482b91204100cc8515da99aeb06773f5`

The maintainer keeps this file; contributors don't edit it. The hourly "Expire claims"
workflow keeps the line below current (`python3 tools/pool.py progress --write`); leave the
markers in place.

<!-- progress:start -->
19260 / 1014024 bytes solved (1.90%), 1544 / 9487 functions
<!-- progress:end -->

## Setup (docs/NEW_PROJECT.md)

- [x] Repository created from the template, tools installed, tool tests pass
- [x] Ghidra function list exported
- [x] Code region end found: 0x080FAB1C
- [x] `functions.csv` generated (9227 functions, 0x0800024C-0x080F8FB4), `rom_sha1` set
- [x] Boundaries fixed: two long-branch fake starts merged into 0x0808738C and 0x080894DC
- [x] Six rows starting on literal-pool data fixed (PR #82)
- [x] 264 missed leaf-function starts split out (PR #276): 9224 -> 9488 rows
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

Built with their own flags (`[function_cflags]` in `pool.toml`):

| Function | What | Issue |
|---|---|---|
| 0802BE10 | `push {lr}; b .` infinite loop; no `-fprologue-bugfix` | #132 |
| 0805DF60 | leaf `return 76` that still pushes lr; no `-fprologue-bugfix` | #341 |
| 0805BC58 | leaf abs that still pushes lr; no `-fprologue-bugfix` | #1525 |
| 08093930 | leaf conditional store that still pushes lr; no `-fprologue-bugfix` | #2227 |
| 0809F21C | leaf compare-and-store byte that still pushes lr; no `-fprologue-bugfix` | #2227 |
| 08015F70 | leaf s16 divide by 16 that still pushes lr; no `-fprologue-bugfix` | #2227 |
| 08044A28 | leaf byte compare (`p[0x82] == 4`) that still pushes lr; no `-fprologue-bugfix` | #2227 |
| 080E4720 | leaf store through a pointer field if non-null that still pushes lr; no `-fprologue-bugfix` | #2452 |
| 0802FED0 | leaf s32 abs at +0x164 that still pushes lr; no `-fprologue-bugfix` | #2452 |
| 0800B394 | leaf byte test (`p[10] != 0`) that still pushes lr; no `-fprologue-bugfix` | #2452 |
| 08056084 | leaf `return g != 0` on a global that still pushes lr; no `-fprologue-bugfix` | #2882 |
| 0800B234 | leaf masked u16 test that still pushes lr; no `-fprologue-bugfix` | #2844 |
| 0801C0B4 | leaf byte read through a nullable pointer field that still pushes lr; no `-fprologue-bugfix` | #2792 |
| 080165BC | leaf range test (`a - 53 <= 3`) that still pushes lr; no `-fprologue-bugfix` | #2705 |
| 0800B3A8 | leaf byte test (`p[11] != 0`) that still pushes lr; no `-fprologue-bugfix` | #2664 |
| 08002A78 | leaf u8 compare (`a > 3`) that still pushes lr; no `-fprologue-bugfix` | #2616 |
| 0803D7FC | leaf `a ? 1 : 2` that still pushes lr; no `-fprologue-bugfix` | #2564 |
| 080475C4 | leaf byte compare (`p[0x76] == 14`) that still pushes lr; no `-fprologue-bugfix` | #2498 |
| 080C1178 | leaf u16 test (`*(u16 *)(p + 12) != 0`) that still pushes lr; no `-fprologue-bugfix` | #2498 |
| 080165A8 | leaf range test (`a - 57 <= 11`) that still pushes lr; no `-fprologue-bugfix` | #2498 |
| 0804E28C | leaf byte compare (`p[0x76] != 9`) that still pushes lr; no `-fprologue-bugfix` | #2498 |
| 080D2208 | leaf byte test returning 1 or 4 that still pushes lr; no `-fprologue-bugfix` | #2498 |
| 080750C0 | leaf clamp (`a - 198`, max 8) that still pushes lr; no `-fprologue-bugfix` | #2498 |
| 080E9E38 | leaf range test (`a - 7 <= 3`) that still pushes lr; no `-fprologue-bugfix` | #2498 |
| 0805009C | leaf loop storing a byte through 5 pointers that still pushes lr; no `-fprologue-bugfix` | #2498 |
| 08000E64 | leaf u8 compare (`a > 3`) that still pushes lr; no `-fprologue-bugfix` | #2498 |
| 0803661C | leaf clamp to 1..3 that still pushes lr; no `-fprologue-bugfix` | #2498 |
| 0800C18C | leaf s8 compare (`p[0xFA] != 2`) that still pushes lr; no `-fprologue-bugfix` | #2498 |
| 080B44C4 | leaf range test (`a - 7 <= 3`, same bytes as 080E9E38) that still pushes lr; no `-fprologue-bugfix` | #2498 |
| 08042DA8 | leaf byte test (`p[0xF0] != 0`) that still pushes lr; no `-fprologue-bugfix` | #2498 |
| 08058E1C | leaf byte test (`p[8] != 0`) that still pushes lr; no `-fprologue-bugfix` | #2498 |
| 080C1F10 | leaf byte compare through a pointer at +0x7C that still pushes lr; no `-fprologue-bugfix` | #2498 |
| 0801C09C | leaf indexed byte read through a nullable pointer that still pushes lr; no `-fprologue-bugfix` | #2498 |
| 08070ED0 | leaf byte compare through a pointer at +0 that still pushes lr; no `-fprologue-bugfix` | #2498 |
| 080B9C8C | leaf u16 zero test (`*(u16 *)(p + 12) == 0`) that still pushes lr; no `-fprologue-bugfix` | #2498 |
| 080B953C | leaf byte zero test (`p[0x5C] == 0`) that still pushes lr; no `-fprologue-bugfix` | #2498 |
| 08090A0C | leaf range test (`*(u32 *)(p + 0x28) - 4 <= 1`) that still pushes lr; no `-fprologue-bugfix` | #2498 |
| 0806B864 | leaf `return g != 0` on a global (same shape as 08056084) that still pushes lr; no `-fprologue-bugfix` | #2498 |
| 0801D60C | leaf loop storing 1 through 4 pointers that still pushes lr; no `-fprologue-bugfix` | #2498 |
| 08015F5C | leaf s16 divide by 16 (same bytes as 08015F70) that still pushes lr; no `-fprologue-bugfix` | #2498 |
| 080C1760 | leaf conditional byte clear (`if (p[14]) p[19] = 0`) that still pushes lr; no `-fprologue-bugfix` | #2498 |
| 08058E08 | leaf conditional byte set (`if (p[8] == 0) p[8] = 60`) that still pushes lr; no `-fprologue-bugfix` | #2498 |
| 080E73F8 | leaf s32 compare (`*(s32 *)(p + 0x7C) > 3`) that still pushes lr; no `-fprologue-bugfix` | #2498 |
| 0801C084 | leaf indexed byte read through a nullable pointer (sibling of 0801C09C) that still pushes lr; no `-fprologue-bugfix` | #2498 |
| 080B66DC | leaf u16 zero test (`*(u16 *)(p + 0x1A) == 0`) that still pushes lr; no `-fprologue-bugfix` | #2498 |
| 08005390 | leaf loop filling a 128-byte table with 0..127 that still pushes lr; no `-fprologue-bugfix` | #2498 |

## Log

- 2026-10-13: Pool created, loop tested end to end.
- 2026-10-14: 180 / 1014024 bytes solved (0.02%), 41 / 9227 functions (smallest first).
- 2026-10-14: First multi-agent run: 5 agents from one fork solved 40 functions (the 4-8 byte
  getters, setters and stubs, smallest first) and released 1, all through PRs, with no claims
  left open and no strikes. 08010DE0 is data, not a function; PR #82 fixes it and five other
  boundaries.
- 2026-10-14: Repo moved to the TrashSlopStudio org (read-only collaborators need an org), then
  made public when private Actions minutes ran low (~900 of 2000 used in a few hours, about
  4-5 billed minutes per function). Going public detached the private fork; a new fork fixed it.
- 2026-10-14: Contributor `/loop` running 5 workers (3 functions each, then replaced) and the
  maintainer `/loop` every 3h. ~265 functions solved, almost all 4-12 byte accessors; 2
  unmatchable functions skipped. Tips T430 (offsets split as +124) and T431 (tail self-calls)
  added after review; tips are never added without a malicious-content and evidence check.
- 2026-10-14: The hourly progress workflow never fired on its schedule after the transfer
  (only manual runs); the progress line was refreshed by hand.
- 2026-10-14: 4088 / 1014024 bytes solved (0.40%), 573 / 9487 functions; 4- to 12-byte stubs and wrappers mostly done. T16 extended (8-byte struct copies)
  and T432 (0xFFFF halfword stores) added after review. Coordinator loop paused.
- 2026-10-14: 8120 / 1014024 bytes solved (0.80%), 909 / 9487 functions; coordinator loop
  restarted, 5 workers through the 0803-080D range (12-byte wrappers and accessors), baldosa
  contributing too. 0805BC58 skipped (same no-`-fprologue-bugfix` case as #132/#341; both
  match without the flag, per-function flags proposed in #1247). T16 extended (`long long`
  8-byte copies). Shared-login claim races and transient fetch/push errors handled by retries.
- 2026-10-14: Per-function compiler flags added (`[function_cflags]`). 0802BE10, 0805DF60 and
  0805BC58 match without `-fprologue-bugfix` (a jump present at reload leaves a leaf pushing
  lr), so they are back in play and off the coordinator's skip list.
- 2026-10-14: Tips T435-T438 added and T06, T08, T15 extended from agent reports. 10 more leaves that push
  lr verified without `-fprologue-bugfix` and put on the coordinator skip list until #2498 merges;
  080BA948 (two stubs, #2628) held as pending split. A claim PR (#2528) was rejected on re-check after
  its claim had already merged.
- 2026-10-14: 39 more leaves that push lr added to `[function_cflags]` (080E4720, 0802FED0, 0800B394,
  08056084, 0800B234, 0801C0B4, 080165BC, 0800B3A8, 08002A78, 0803D7FC, 080475C4, 080C1178, 080165A8, 0804E28C,
  080D2208, 080750C0, 080E9E38,
  0805009C, 08000E64, 0803661C, 0800C18C,
  080B44C4, 08042DA8, 08058E1C,
  080C1F10, 0801C09C, 08070ED0, 080B9C8C,
  080B953C, 08090A0C, 0806B864,
  0801D60C, 08015F5C, 080C1760,
  08058E08, 080E73F8, 0801C084,
  080B66DC, 08005390), each verified without
  `-fprologue-bugfix`.
