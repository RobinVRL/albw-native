#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0057D86C(int *param_1);
extern int func_00588154(int param_1,uint param_2);
extern int func_006916F0(int *param_1,int *param_2);
extern int *DAT_00537f18;
extern int DAT_00537f1c;
extern int DAT_00537f20;
extern int DAT_00537f24;

// USA 00537E40 <- EU 00537E18 (Ghidra, non-matching)
// GLOBAL DAT_00537f18 int *
// GLOBAL DAT_00537f1c int
// GLOBAL DAT_00537f20 int
// GLOBAL DAT_00537f24 int

undefined4 func_00537E40(int param_1,int *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(int *)(albw_frame + 0x0))
  #define local_6c (*(uint * *)(albw_frame + 0x4))
  #define local_68 (*(int *)(albw_frame + 0x8))
  #define local_64 (*(uint * *)(albw_frame + 0xc))
  #define local_60 (*(int *)(albw_frame + 0x10))
  #define local_5c ((uint *)(albw_frame + 0x14))
  #define uStack_1d (*(undefined1 *)(albw_frame + 0x53))
  bVar1 = func_0057D86C((int *)(param_1 + 0xc));
  uVar2 = 0;
  if (bVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xac);
    }
    local_6c = (uint *)func_00588154(*DAT_00537f18,uVar2);
    local_70 = DAT_00537f1c;
    local_60 = 0x40;
    uStack_1d = 0;
    local_68 = DAT_00537f20;
    local_64 = local_5c;
    (**(code **)(DAT_00537f1c + 8))(&local_70);
    uVar3 = 0;
    do {
      if (*(char *)((int)local_6c + uVar3) == '\0') {
        if ((int)uVar3 < 0x40001) goto LAB_00537ecc;
        break;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 0x40001);
    uVar3 = 0;
LAB_00537ecc:
    if (local_60 <= (int)uVar3) {
      uVar3 = local_60 - 1;
    }
    (**(code **)(local_70 + 8))(&local_70);
    func_0010E3C4(local_5c,local_6c,uVar3);
    local_68 = DAT_00537f24;
    *(undefined1 *)((int)local_5c + uVar3) = 0;
    uVar2 = func_006916F0(&local_68,param_2);
  }
  return uVar2;
}

