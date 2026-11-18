# Pushable objects (gravestones `MojTombNormal`, `MojTombStairs`, `MojTombBoneA`)

How a gravestone moves, function by function (USA addresses; descriptive names in
native/names.txt, so gdb backtraces and `nm` show them). Fixed in BOOT_LOG 160k.

Input on the 3DS: stand south of the gravestone, hold Up into it and press A, keep holding Up.

1. `00348558` player_InteractionCheck (every frame): the contact list is filled by the
   collision query `00361A20` (layer 13, the interaction boxes). For each actor in contact it asks
   the interaction kind, `vt+0x4C`. For MojTomb that is `005244C0`: 15 when the stick points up
   (the input angle quadrant) and Link is south of the stone, else 0. A pressed with kind 15 starts
   player action 0x73 (grip).
2. `003786B8` player_PushPull_Update, state 0x73: compares the stick with the direction to the
   stone. While pushing, it asks the stone `vt+0x58` `00176664` (can move up?) ->
   `00325CF4` (target = position + 1 unit) -> `vt+0x5C` `001766B4` -> `00325DE0`
   pushable_IsTargetFree (no actor within 0.5, ground height within the tolerance:
   `vt+0x60` -> thunk `0054E224` -> `0054E650`). Each "yes" frame counts at player+0x7C. After
   `vt+0x54` = 46 frames the player goes to state 0x74.
3. `00176314` pushable_IdleUpdate (the stone): when `0053F260` sees the player in state 0x74 and
   the target is free, the stone switches to its move state: `00176370` (SE_TombMOVE, moving flag
   +0x4CC = 1), then `001767D4` plays the 90-frame move animation.
4. The player's 0x74 update sees `vt+0x6C` (moving flag) and lets go.

Port bugs fixed here (BOOT_LOG 160k):
- `00325DE0`: the height tests `vt+0x60` / `vt+0x64` take three floats in s0..s2 (ground height,
  object height, tolerance this[0x4C4]); Ghidra passed none.
- `0054E224`: the vtable entry is a thunk (`b 0054E628`); Ghidra inlined the target without `this`.
- `0054E650`: the matched source had no `this` parameter.

Debug: `ALBW_INTERACT_TRACE=1` logs the interaction check (contact count, kind per actor).
Route steps for tests: `hold CUP+A 10` (several buttons, no release frame between steps).
