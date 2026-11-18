#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00111A64(uint *param_1);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_0019B04C(uint param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_0058A7D4(void);
extern int DAT_002b3734;
extern float DAT_002b3738;
extern undefined4 DAT_002b373c;
extern float DAT_002b3740;
extern uint *DAT_002b3744;
extern int *DAT_002b3748;
extern undefined4 DAT_002b374c;

// USA 002B35AC <- EU 002B3588 (Ghidra, non-matching)
// GLOBAL DAT_002b3734 int
// GLOBAL DAT_002b3738 float
// GLOBAL DAT_002b373c undefined4
// GLOBAL DAT_002b3740 float
// GLOBAL DAT_002b3744 uint *
// GLOBAL DAT_002b3748 int *
// GLOBAL DAT_002b374c undefined4

undefined4 func_002B35AC(int param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x2e0];
  #define local_2e0 (*(uint *)(albw_frame + 0x0))
  #define local_2dc (*(undefined4 *)(albw_frame + 0x4))
  #define local_2d8 (*(undefined4 *)(albw_frame + 0x8))
  #define local_2d4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_2c4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_2c0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2bc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2b8 (*(undefined2 *)(albw_frame + 0x28))
  #define local_298 (*(undefined4 *)(albw_frame + 0x48))
  #define local_294 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_28c (*(undefined2 *)(albw_frame + 0x54))
  #define local_20 (*(undefined4 *)(albw_frame + 0x2c0))
  bVar1 = func_0051D27C((int *)(param_1 + 1000),*(int *)(param_1 + 0x95c),DAT_002b3734);
  uVar6 = DAT_002b373c;
  fVar7 = DAT_002b3738;
  if (bVar1) {
    *(undefined1 *)(param_1 + 0x984) = 0;
    func_0014FAFC(param_1,*(uint *)(param_1 + 1000),fVar7);
    if (*(uint *)(param_1 + 0x934) < *(uint *)(param_1 + 0x938)) {
      *(uint *)(param_1 + 0x934) = *(uint *)(param_1 + 0x934) + 1;
    }
    else {
      fVar7 = DAT_002b3740;
      puVar2 = (uint *)func_0058A7D4();
      uVar3 = func_00111A64(puVar2);
      *(uint *)(param_1 + 0x95c) = uVar3;
      puVar2 = (uint *)func_0058A7D4();
      uVar3 = func_00111A64(puVar2);
      iVar4 = (int)((ulonglong)uVar3 * 0x78 >> 0x20) + 0xb4;
      *(int *)(param_1 + 0x938) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 0x93c) = uVar6;
      }
      else {
        fVar5 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_1 + 0x93c) = fVar7 / fVar5;
      }
      *(undefined4 *)(param_1 + 0x934) = 0;
    }
    if (*(uint *)(param_1 + 0x940) < *(uint *)(param_1 + 0x944)) {
      *(uint *)(param_1 + 0x940) = *(uint *)(param_1 + 0x940) + 1;
    }
    else {
      local_2c0 = 0;
      local_2bc = 0;
      local_2c4 = 0;
      local_298 = 0;
      local_294 = 0;
      local_20 = 0;
      func_0010E3C4(&local_2e0,(uint *)(param_1 + 4),0x2c4);
      local_2e0 = func_0019B04C(*DAT_002b3744);
      local_28c = 0xffff;
      local_2dc = *(undefined4 *)(param_1 + 0x3d0);
      local_2d8 = *(undefined4 *)(param_1 + 0x3d4);
      local_2d4 = *(undefined4 *)(param_1 + 0x3d8);
      local_2b8 = 0x1e0;
      local_294 = *(undefined4 *)(param_1 + 0x2cc);
      func_004C43E0(*DAT_002b3748,(int *)&local_2e0);
      uVar6 = DAT_002b374c;
      *(undefined4 *)(param_1 + 0x944) = 0x19;
      *(undefined4 *)(param_1 + 0x948) = uVar6;
      *(undefined4 *)(param_1 + 0x940) = 0;
    }
    return 0;
  }
  if (*(char *)(param_1 + 0x984) == '\0') {
    return func_0014FAFC(param_1,*(uint *)(param_1 + 1000),DAT_002b3738);
  }
  *(undefined4 *)(param_1 + 0x3dc) = DAT_002b373c;
  *(undefined4 *)(param_1 + 0x3e0) = uVar6;
  *(undefined4 *)(param_1 + 0x3e4) = uVar6;
  return 0;
}

