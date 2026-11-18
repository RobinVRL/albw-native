#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_001507A8(int param_1,int param_2);
extern int func_0018BC14(int param_1);
extern int func_004B06FC(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int DAT_0018bbe0;
extern int DAT_0018bbe4;
extern float DAT_0018bbe8;
extern float DAT_0018bbec;
extern int *DAT_0018bbf0;
extern int *DAT_0018bbf4;
extern int *DAT_0018bbf8;
extern int *DAT_0018bbfc;
extern int *DAT_0018bc00;
extern int *DAT_0018bc04;
extern int *DAT_0018bc08;
extern int *DAT_0018bc0c;
extern int *DAT_0018bc10;

// USA 0018B9A4 <- EU 0018B9A4 (Ghidra, non-matching)
// GLOBAL DAT_0018bbe0 int
// GLOBAL DAT_0018bbe4 int
// GLOBAL DAT_0018bbe8 float
// GLOBAL DAT_0018bbec float
// GLOBAL DAT_0018bbf0 int *
// GLOBAL DAT_0018bbf4 int *
// GLOBAL DAT_0018bbf8 int *
// GLOBAL DAT_0018bbfc int *
// GLOBAL DAT_0018bc00 int *
// GLOBAL DAT_0018bc04 int *
// GLOBAL DAT_0018bc08 int *
// GLOBAL DAT_0018bc0c int *
// GLOBAL DAT_0018bc10 int *

bool func_0018B9A4(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  ushort uVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  puVar4 = (ushort *)func_004B06FC((*(ushort *)(param_2 + 0x20) & 0x7e0) >> 5);
  iVar6 = DAT_0018bbe0;
  if ((*puVar4 & 8) != 0) {
    return false;
  }
  if ((1 << (*(ushort *)(param_2 + 0x20) & 0x1f) & 0x18U) != 0) {
    iVar5 = *(int *)(param_2 + 8);
    iVar1 = DAT_0018bbe0 - iVar5;
    if (iVar5 < DAT_0018bbe0) {
      iVar1 = DAT_0018bbe4 - iVar5;
      iVar6 = DAT_0018bbe4;
    }
    else {
      *(undefined1 *)(param_1 + 0x4ee) = 1;
    }
    if (iVar6 != iVar5 && iVar1 < 0 == SBORROW4(iVar6,iVar5)) {
      func_00115C70(&local_20,(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x368));
      local_1c = DAT_0018bbe8;
      func_00115DC8(&local_20);
      if ((uint)ALBW_AS_U32((local_20 * *(float *)(param_2 + 4) + local_1c * *(float *)(param_2 + 8) +
                local_18 * *(float *)(param_2 + 0xc))) <= (uint)ALBW_AS_U32(DAT_0018bbec)) {
        *(undefined1 *)(param_1 + 0x4f2) = 1;
      }
    }
  }
  uVar3 = *(ushort *)(param_2 + 0x20) & 0x7e0;
  if (uVar3 == 0x180) {
    *(undefined1 *)(param_1 + 0x4ef) = 1;
  }
  else if ((uVar3 == 0x160) &&
          (*(undefined1 *)(param_1 + 0x4f0) = 1,
          (1 << (*(ushort *)(param_2 + 0x20) & 0x1f) & 0x10U) != 0)) {
    *(undefined4 *)(param_1 + 0x4f4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x4fc) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x504) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x508) = *(undefined4 *)(param_2 + 0x18);
  }
  iVar6 = func_0052FBA0(*DAT_0018bbf0 + 0x3dbbc,*(uint *)(param_2 + 0x28));
  if (iVar6 != 0) {
    iVar6 = func_00588BE4(iVar6);
    if (iVar6 == *DAT_0018bbf4) {
      return false;
    }
    if (iVar6 == *DAT_0018bbf8) {
      return false;
    }
    if (iVar6 == *DAT_0018bbfc) {
      return false;
    }
    if (iVar6 == *DAT_0018bc00) {
      return false;
    }
    if (iVar6 == *DAT_0018bc04) {
      return false;
    }
    if (iVar6 == *DAT_0018bc08) {
      return false;
    }
    if (iVar6 == *DAT_0018bc0c) {
      func_0018BC14(param_1);
      return false;
    }
    if ((iVar6 == *DAT_0018bc10) && ((*(ushort *)(param_2 + 0x20) & 0x7e0) == 0x1a0)) {
      *(undefined4 *)(param_1 + 0x4f4) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)(param_1 + 0x4fc) = *(undefined4 *)(param_2 + 0xc);
      *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_2 + 0x10);
      *(undefined4 *)(param_1 + 0x504) = *(undefined4 *)(param_2 + 0x14);
      *(undefined4 *)(param_1 + 0x508) = *(undefined4 *)(param_2 + 0x18);
    }
  }
  bVar2 = func_001507A8(param_1,param_2);
  return bVar2;
}

