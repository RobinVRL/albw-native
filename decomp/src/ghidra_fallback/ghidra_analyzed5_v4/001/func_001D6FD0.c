#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_004C4AF4(int param_1,int *param_2,int param_3);
extern int func_00581D60(int param_1);
extern int DAT_001d7220;
extern int *DAT_001d7224;
extern int *DAT_001d7228;
extern uint *DAT_001d722c;
extern undefined4 *DAT_001d7230;
extern undefined4 DAT_001d7234;

// USA 001D6FD0 <- EU 001D6FD0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_001d7220 int
// GLOBAL DAT_001d7224 int *
// GLOBAL DAT_001d7228 int *
// GLOBAL DAT_001d722c uint *
// GLOBAL DAT_001d7230 undefined4 *
// GLOBAL DAT_001d7234 undefined4

undefined4 func_001D6FD0(undefined4 *param_1,uint param_2,int param_3,int *param_4,int param_5)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x2e0];
  #define local_2e0 (*(int *)(albw_frame + 0x0))
  #define local_2dc (*(undefined4 *)(albw_frame + 0x4))
  #define local_2d8 (*(undefined4 *)(albw_frame + 0x8))
  #define local_2d4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_2c4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_2c0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2bc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2b8 (*(undefined2 *)(albw_frame + 0x28))
  #define local_2b6 (*(undefined2 *)(albw_frame + 0x2a))
  #define local_298 (*(undefined4 *)(albw_frame + 0x48))
  #define local_294 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_290 (*(undefined2 *)(albw_frame + 0x50))
  #define local_20 (*(undefined4 *)(albw_frame + 0x2c0))
  if (param_2 < 6) {
    local_2c0 = 0;
    local_2bc = 0;
    local_2c4 = 0;
    local_298 = 0;
    local_294 = 0;
    local_20 = 0;
    func_002DFF7C(&local_2e0);
    local_2e0 = func_0019B04C(*(uint *)(DAT_001d7220 + param_2 * 4));
    if (param_5 < 0) {
      uVar1 = func_00581D60(*DAT_001d7224);
      local_290 = (undefined2)uVar1;
    }
    else {
      local_290 = (undefined2)param_5;
    }
    local_2b8 = (undefined2)param_3;
    local_2b6 = (undefined2)param_2;
    local_2dc = *param_1;
    local_2d8 = param_1[1];
    local_2d4 = param_1[2];
    local_2c0 = 0;
    switch(param_3) {
    case 0:
    case 10:
      piVar2 = func_004C4AF4(*DAT_001d7228,&local_2e0,0);
      if (((*DAT_001d722c & 1) == 0) && (iVar3 = func_00100174((int *)DAT_001d722c), iVar3 != 0)) {
        *DAT_001d7230 = DAT_001d7234;
      }
      if ((piVar2 == (int *)0x0) || (iVar3 = (**(code **)*piVar2)(piVar2,DAT_001d7230), iVar3 == 0))
      {
        piVar2 = (int *)0x0;
      }
      if (piVar2 != (int *)0x0) {
        *(undefined1 *)((int)piVar2 + 0x425) = 0;
        *(undefined1 *)((int)piVar2 + 0x426) = 1;
        return 1;
      }
      break;
    case 1:
    case 3:
    case 5:
      func_004C43E0(*DAT_001d7228,&local_2e0);
      return 1;
    case 2:
    case 4:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xb:
      piVar2 = func_004C4AF4(*DAT_001d7228,&local_2e0,0);
      if (((*DAT_001d722c & 1) == 0) && (iVar3 = func_00100174((int *)DAT_001d722c), iVar3 != 0)) {
        *DAT_001d7230 = DAT_001d7234;
      }
      if ((piVar2 == (int *)0x0) || (iVar3 = (**(code **)*piVar2)(piVar2,DAT_001d7230), iVar3 == 0))
      {
        piVar2 = (int *)0x0;
      }
      if (piVar2 != (int *)0x0) {
        if (param_3 != 7) {
          iVar3 = param_4[1];
          iVar4 = param_4[2];
          piVar2[0xf7] = *param_4;
          piVar2[0xf8] = iVar3;
          piVar2[0xf9] = iVar4;
          return 1;
        }
        iVar3 = param_4[1];
        iVar4 = param_4[2];
        piVar2[0x14c] = *param_4;
        piVar2[0x14d] = iVar3;
        piVar2[0x14e] = iVar4;
        piVar2[0x151] = (int)ALBW_AS_U32((ALBW_AS_F32(piVar2[0xf5]) - ALBW_AS_F32(piVar2[0x14d])));
        return 1;
      }
    }
  }
  return 0;
}

