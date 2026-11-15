/* USA 00413124 (EU 00413104): converted Ghidra text (build/decomp, round-3 stage 2) with one fix.
 * nw::snd stream header load (reads the 0x40-byte file header, then header + info block).
 * Both virtual Seek calls (file vtable +0x40) lost r2: the ARM passes r1 = 0 (offset) and
 * r2 = 0 (origin = begin) (EU 00413118 `mov r2, #0` / 00413128 `mov r1, r2`, and 0041319C);
 * Ghidra printed `(file, 0)`, so the origin was stack garbage, the header read failed now and
 * then, 00415838 left the stream object of sound command 0x28 unset (cmd+0x10) and the sound
 * thread crashed in 00419D34 when the title BGM started (boot stop 78b, timing dependent).
 * CLASS 1 (lost register arguments in virtual calls). Confidence: high. */
#include "ghidra_types.h"

extern int func_0041077C(uint param_1);
extern int func_00413320(undefined4 *param_1,int *param_2);
extern int func_00413384(undefined4 *param_1);
extern int func_0056AAD4(int param_1);
extern int func_0056AB4C(int param_1);
extern int func_0056AB84(int param_1);
extern int func_0056C830(undefined4 param_1,int *param_2);
extern int func_0056C860(int param_1,undefined4 *param_2);

// USA 00413124 <- EU 00413104 (Ghidra, non-matching)

undefined4 func_00413124(undefined4 *param_1,int *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define local_b8 ((byte *)(albw_frame + 0x8))
  #define aiStack_80 ((int *)(albw_frame + 0x40))
  #define auStack_20 ((undefined4 *)(albw_frame + 0xa0))
  (**(code **)(*(int *)*param_1 + 0x40))((int *)*param_1,0,0);
  iVar1 = (**(code **)(*(int *)*param_1 + 0x24))((int *)*param_1,aiStack_80,0x40);
  if (iVar1 == 0x40) {
    func_00413384(auStack_20);
    iVar1 = func_0056C830(auStack_20,aiStack_80);
    if (iVar1 != 0) {
      iVar1 = func_0056AB4C((int)aiStack_80);
      iVar2 = func_0056AAD4((int)aiStack_80);
      uVar5 = iVar1 + iVar2;
      if (uVar5 <= param_3) {
        (**(code **)(*(int *)*param_1 + 0x40))((int *)*param_1,0,0);
        uVar3 = (**(code **)(*(int *)*param_1 + 0x24))((int *)*param_1,param_2,uVar5);
        if (uVar3 == uVar5) {
          func_00413320(param_1 + 1,param_2);
          iVar1 = func_0056C860((int)(param_1 + 1),(undefined4 *)local_b8);
          if (iVar1 != 0) {
            uVar5 = func_0041077C((uint)local_b8[0]);
            if (uVar5 == 3) {
              uVar4 = 0;
              if (param_1[1] != 0) {
                uVar4 = func_0056AB84(param_1[1]);
              }
              param_1[3] = uVar4;
            }
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

