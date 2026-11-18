#include "ghidra_types.h"

extern int func_0010CF7C(undefined4 *param_1,undefined1 param_2);
extern int func_002589F8(int param_1,int param_2,int param_3);
extern int func_0031D8C4(int param_1);
extern int func_00409B8C(int *param_1);
extern void func_00409BC8(int *param_1,int *param_2,float fparam_0);
extern int func_0056A1C0(int param_1);
extern int *DAT_0025853c;
extern int *DAT_00258540;
extern int DAT_00258544;

// USA 002583E4 <- EU 0025840C (Ghidra, non-matching)
// GLOBAL DAT_0025853c int *
// GLOBAL DAT_00258540 int *
// GLOBAL DAT_00258544 int

void func_002583E4(int param_1)

{
  uint uVar1;
  int iVar2;
  float in_s0;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 ((uint *)(albw_frame + 0x8))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x30))
  #define local_1c (*(undefined4 *)(albw_frame + 0x34))
  #define local_18 ((int *)(albw_frame + 0x38))
  if ((*(char *)(*DAT_0025853c + 0x25) == '\x03') &&
     (iVar2 = *(int *)(*DAT_00258540 + 0x14), iVar2 != 0)) {
    func_00409BC8(local_18,(int *)(param_1 + 0xc),in_s0);
    if (local_18[0] == 0) {
      func_0010CF7C((undefined4 *)(param_1 + 0x14),0);
    }
    else {
      uVar1 = func_0056A1C0(local_18[0]);
      func_002589F8(param_1,uVar1,1);
      if (((*(char *)(param_1 + 0x6b) != '\0') &&
          (*(uint *)(param_1 + 0x50) <= *(uint *)(param_1 + 0x58))) &&
         (uVar1 < *(uint *)(param_1 + 0x58))) {
        func_0010CF7C((undefined4 *)(param_1 + 0x14),0);
      }
      *(uint *)(param_1 + 0x58) = uVar1;
    }
    func_00409B8C(local_18);
    local_48[0] = *(uint *)(DAT_00258544 + 0xa0);
    local_48[1] = *(undefined4 *)(DAT_00258544 + 0xa4);
    local_48[2] = *(undefined4 *)(DAT_00258544 + 0xa8);
    local_48[3] = *(undefined4 *)(DAT_00258544 + 0xac);
    uStack_38 = *(undefined4 *)(DAT_00258544 + 0xb0);
    uStack_34 = *(undefined4 *)(DAT_00258544 + 0xb4);
    uStack_30 = *(undefined4 *)(DAT_00258544 + 0xb8);
    uStack_2c = *(undefined4 *)(DAT_00258544 + 0xbc);
    local_1c = *(undefined4 *)(DAT_00258544 + 0xcc);
    uStack_28 = *(undefined4 *)(DAT_00258544 + 0xc0);
    uStack_24 = *(undefined4 *)(DAT_00258544 + 0xc4);
    uStack_20 = *(undefined4 *)(DAT_00258544 + 200);
    if (((*(int *)(param_1 + 0x3c) < 0xc) &&
        (local_48[*(int *)(param_1 + 0x3c)] <= *(uint *)(param_1 + 0x58))) &&
       (iVar2 = func_0031D8C4(iVar2), iVar2 != 0)) {
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
      return;
    }
  }
  else {
    func_0010CF7C((undefined4 *)(param_1 + 0x14),0);
  }
  return;
}

