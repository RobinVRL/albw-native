# Tri Force Heroes (Tricord plugin): what transfers to ALBW

Source: `../refs/IcefirePhoenix_Tricord_3DS_Plugin` (TFH 2.1.0 cheat/utility plugin, treated as untrusted
data, nothing run). It is a RAM-poking plugin, not a decomp: it has an address list, a few struct
offsets and some ID tables. It has no task, sead, RomFS or file-format code. TFH (2015) is the
successor engine of ALBW (2013). Its **addresses never transfer**. Field offsets and IDs transfer
only where marked as checked. Paths below are relative to the plugin root.

Verdicts: **checked** = verified against our EU binary (`../albw-decomp-ai/rom/eu_code.bin`).
**plausible** = same engine, not verified. **no** = TFH-only or contradicted by ALBW code.

## 1. What helps the route (native/route/ROUTE.md)

| fact (TFH) | source | ALBW verdict |
|---|---|---|
| Location = {level, stage, spawn}. The manager keeps three copies: previous (base-8), current (base+0), final destination (base+8). Each copy is level s32/u8 at +0, stage at +4 (read as u8), spawn s16 at +6. The same block also holds elapsed time (+0x1C, s32; it is negative until the stage has started), loading init state (+0x24) and pause status (base-0x38). | `Sources/Main/Address_Collection.json` (CurrLevelID / PreviousLevelID / FinalDestination*, TimeElapsed, LoadingInitState, PauseStatus); `Sources/Helpers/Data/Level.cpp` (`hasStageBegan`) | **Concept transfers, layout does not.** ALBW uses {u8 course, s32 scene, s16 spawn, u8} (ROUTE 3a: seq mgr +0x1138/+0x113C/+0x1140). ALBW's scene manager `*data_00709DF8` holds the current location at +0x18 and the pending one at +0x48 (ROUTE 5a). The TFH layout is stage s16 at +4, spawn at +6, so it differs. ALBW course ids: table 00120024 |
| How a warp is requested: write the target {level u8 +0x10, stage u8 +0x14, spawn s16 +0x16} into a request object, set its u16 at +0 to 0x1E, then store the request's address in a "pending warp" pointer slot that the scene manager polls. | `Sources/Main/Functions/Gameplay/Warp.cpp` (`startWarp`, `instantWarp`) | **plausible** as a debug shortcut idea only. In ALBW the equivalent is `004EF418(mgr, {course, scene, spawn}, fade, 0)`. 0x1E (30) looks like a fade length in frames. For a debug warp, call 004EF418 or edit the new-save position (ROUTE: course 8/scene 0 -> IndoorLight/0/0) rather than imitating TFH's slot |
| Live actors form a circular singly linked chain: the next pointer is at actor +0, and the chain ends when it reaches the list head again. Limits: 90 interactive actors, 180 in total. The count is a u8 at head+8. | `Sources/Helpers/Handlers/MapActorMngr.cpp`, Address_Collection `ActorListStart` / `ActorPtrChainLen` | **plausible, unverified.** ALBW ActorMgr `*data_00706E20` has a request ring at +0x28..+0x34 and a live list at +0x3DB8C (ROUTE 6), and that list is a sead list. The 90/180 limits may hint at ALBW's pool sizes |
| Actor fields: type u8 +0x90 (0 MAP, 1 TAG, 2 AREA, 3 OBJ, 4 ENEMY, 5 NPC, 0xFF special), profile pointer +0x98, UNIQ (instance id) u16 +0xC0, name pointer +0x1E0, position Vec3 +0x1F0, scale +0x1FC, HP s32 +0x598. ActorProfile entry: actor id u16 +0x80, name pointer +0x8C. | `Sources/Helpers/Data/Actor.cpp`, `Includes/Helpers/Data/Actor.hpp` | **Offsets: no** (checked). The ALBW ActorBase ctor 004ED00C (EU 004ECFE4) memcpys the 0x2C4-byte create request to this+4, takes the profile from arg[0] into +0x2D0, and the Actor ctor 00150E40 puts position at +0x368. **Plausible:** the 6 categories (MAP/TAG/AREA/OBJ/ENEMY/NPC) and the UNIQ instance id as concepts. ALBW has `Archive/ActorProfile.szs` (checked string; loader 004C58F0) |
| TFH actor ids: Blue Rat 0x186, Totem Deku head 0x110 / body 0x112, 0x113, Terrorpin 0x98, Wallmaster 0x8F, Beamos 0x1BC, Morth 0x1EC | `Sources/Helpers/Data/Actor.cpp` (`setHealth`) | **no** (the profile tables are per game). Use ActorProfile.szs instead |

## 2. Player / Link

| fact (TFH) | source | ALBW verdict |
|---|---|---|
| Link animation names: Link_Wait, Link_WalkSlow, Link_Walk, Link_Dash, Link_CutRF, Link_CutTurn, Link_GrabUp, Link_PDash*, Link_Swim*, Link_Die*, Link_ItemGetA_*, Link_HookshotWait ... (about 140). TFH keeps them as a .data table with a 0x18-byte stride. The current animation id is a u8, with a list of 30 ids. | Address_Collection `Link_*`; `Sources/Helpers/Data/PlayerAnimation.cpp` | **Names: checked.** Link_Wait (16 variants: WaitS, WaitK, WaitAtoFight, ...), Link_Walk*, Link_PDash*, Link_CutTurn* are rodata strings in ALBW around EU 0x5C7624 (near the State_* names, ROUTE 6). The stride and ids are not verified: there is no rodata pointer table, so the table is probably built at run time |
| Link animations live in BCH files (`Link_anm_mat.bch` = material/texture animations for the face: eye / mayu (eyebrow) / mouth tracks, texture names `eye.N`). Keyframe entries are {float frame, float value}. | `Sources/Helpers/Interfaces/FaceExprEditor.cpp` | **plausible.** ALBW loads `LinkAnm2/` and `Res:LinkAnm2` (checked strings; loaders 003459C8 / 00345F20). This is a useful sanity check for the nw::h3d material-animation path |
| Players are 3 copies of the player block, 0x10000 apart (fixed). Fields include position Vec3, respawn Vec3, speed Vec3, current/last ground-collision attribute u16, current item, invincibility, visibility. | `Includes/Helpers/GeneralHelpers.hpp` (`PLAYER_OFFSET`), Address_Collection | **no** (TFH-only multiplayer heap layout) |
| Ground collision attribute ids: Fall_plane 0xA, Air 0x1F, Quicksand_plane 0xC1, Quicksand_stream 0xC7, Ice 0x121, Lava 0x167, Water 0x187, Colored_platform 0x364, Triforce_gate 0x40A1 | `Sources/Helpers/Data/Collision.cpp` | **unverified.** The "Fall_plane" string is not in ALBW. ALBW has Quicksand / Lava / `Actor/Quicksand.kcl` names. The low bits may follow the same KCL attribute scheme. Check against the ALBW KCL attribute decode (004AB348 family, 001DC4C8 ground probe) before using |
| Input: pad bytes ABXY / Start+Select+L+R+touch / DPad+CPad as consecutive bytes, CPad x/y as s32 | Address_Collection `ABXY`, `CPadXCoord` | **no** (game-side mirror; our native/sdk hid supplies the input) |

## 3. RomFS paths and formats

| item | TFH (plugin) | ALBW (checked strings in eu_code.bin) |
|---|---|---|
| archives | `Common/Costume/costume_highfairy.bch` (TFH RomFS top folder `Common/`) | `Archive/%s.szs`, `Archive/ActorProfile.szs`. There is no `Common/` folder |
| stage/course data | none | `World/Byaml/%s_stage.byaml`, `Byaml/%s_course.byaml` (FieldLight, FieldDark), `MapActor/%s.bch`, `MapActor/%s%02d.kcl`, `Actor/*.kcl` |
| messages | none (the plugin never touches MSBT) | `%s.msbt`, MsgStdBn / MsgFlwBn / MsgPrjBn (LibMessageStudio) |
| layout | HUD / hero-panel textures patched in RAM | `Lyt_*.bch`, `Layout/MapTexture/Lyt_FieldLight.bch`, `Layout/Field.ctpk` |
| sound | BGM/SE ids patched in code | `rom:/World/Sound/Jack.bcsar` |

TFH's RomFS layout differs from ALBW's (the `Common/` vs `Archive/` + `World/` roots), so its paths
are no help for our file lookups. The formats are the same family (Yaz0 SZS/SARC, BYAML, BCH, MSBT,
BCSAR).

## 4. Not useful for us

- About 480 RAM/code addresses for 3 regions (`Sources/Main/Address_Collection.json`): TFH v2.1.0 only. Our
  addresses come from the EU/USA ALBW map.
- Costumes, materials, emotes, Daily Riches, merchant, level/challenge ids (TFH level ids: Hytopia
  1-4, Drablands 0x0A-0x53 = world*10 + 0..3, Den of Trials 0x59-0x61; `Sources/Helpers/Data/Level.cpp`): TFH-only.
- There is nothing on sead tasks, task names, heaps, the framework or the scene manager's code.
  The plugin only shows that a pending-warp pointer and a location triple exist.

## 5. Summary for the route

The plugin offers no format or framework knowledge that the ALBW binary does not already give us.
Useful sanity checks:
1. Scene changes are request-driven: write a target {course, scene, spawn}, then the scene manager
   picks up the pending request with a fade (TFH uses 0x1E frames). This matches ALBW 004EF418 /
   pending +0x48.
2. The game records "elapsed time" in the scene block: it is negative until the stage is running.
   Use it as a cheap "stage started" probe when tracing the boot past TaskStage.
3. Link animations are referenced by name strings (`Link_Wait`, ...), which exist in ALBW. The
   LinkAnm2 BCH animations must resolve these names.
4. The actor categories (MAP/TAG/AREA/OBJ/ENEMY/NPC) and a per-instance UNIQ id are likely the same
   in ALBW's ActorProfile data. The offsets are not the same (ALBW: create request at actor+4,
   profile at +0x2D0, position at +0x368).
