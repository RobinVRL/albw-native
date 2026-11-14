/* USA 004C4268 (EU 004C4240): game object init that seeds the global Random (*0x00715388)
 * from the system tick. Native fix of the generated Ghidra text: the inline svc 0x28
 * (GetSystemTick) result was dropped; uses albw_os_system_tick(). Rest unchanged.
 * Confidence: high. */
#include <stdint.h>
uint64_t albw_os_system_tick(void);
#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010DA24(int param_1,undefined4 param_2);
extern int func_00293C24(int param_1);
extern int func_0049BB88(int *param_1,int param_2,int param_3,int param_4,int param_5);
extern int func_004A13D4(void);
extern undefined *DAT_004c4330;
extern undefined4 *DAT_004c4334;
extern int DAT_004c4338;

// USA 004C4268 <- EU 004C4240 (Ghidra, non-matching)
// GLOBAL DAT_004c4330 undefined *
// GLOBAL DAT_004c4334 undefined4 *
// GLOBAL DAT_004c4338 int

undefined4 * func_004C4268(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 extraout_r1;
  int extraout_r1_00;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((int *)(albw_frame + 0x0))
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  iVar1 = func_00100118(param_1 + 0x18,DAT_004c4330,0x40,0x20);
  *(undefined1 *)(iVar1 + 0x9a0) = 0;
  *(undefined1 *)(iVar1 + 0x9a1) = 0;
  *(undefined1 *)(iVar1 + 0x9a2) = 0;
  *(undefined1 *)(iVar1 + 0x9a3) = 0;
  *(undefined4 *)(iVar1 + 0x9a4) = 0;
  *(undefined4 *)(iVar1 + 0x9a8) = 0;
  *(undefined1 *)(iVar1 + 0x9ac) = 0;
  *(undefined4 *)(iVar1 + 0x9b0) = 0;
  puVar2 = func_00293C24(iVar1 + 0x9b4);
  func_004A13D4();
  /* EU 004C42D8..004C4304: Tick ctor on a stack temporary, svc 0x28 GetSystemTick, then
   * Random::init(rng, tick_lo, 0x67, tick_hi, 0x11) */
  func_0010DA24((int)local_20,extraout_r1);
  { uint64_t tick = albw_os_system_tick();
    func_0049BB88((int *)*DAT_004c4334,(uint)tick,0x67,(uint)(tick >> 32),0x11); }
  puVar2[-0x26e] = puVar2 + puVar2[-4] * DAT_004c4338;
  return puVar2 + -0x273;
}

