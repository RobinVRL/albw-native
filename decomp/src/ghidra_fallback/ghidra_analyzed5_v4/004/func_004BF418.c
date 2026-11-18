#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_004BE858(int param_1);
extern int func_004C0DE8(int param_1,float *param_2);
extern int func_004C10C4(int param_1,float *param_2,uint param_3,int param_4,float fparam_0,float fparam_1);
extern int func_00520FC0(void);
extern int func_0058E2B8(int *param_1);
extern undefined4 DAT_004bf780;
extern undefined4 DAT_004bf784;
extern float DAT_004bf788;
extern uint DAT_004bf78c;
extern float DAT_004bf790;
extern int DAT_004bf794;
extern int DAT_004bf798;
extern int *DAT_004bf79c;

// USA 004BF418 <- EU 004BF3F0 (Ghidra, non-matching)
// GLOBAL DAT_004bf780 undefined4
// GLOBAL DAT_004bf784 undefined4
// GLOBAL DAT_004bf788 float
// GLOBAL DAT_004bf78c uint
// GLOBAL DAT_004bf790 float
// GLOBAL DAT_004bf794 int
// GLOBAL DAT_004bf798 int
// GLOBAL DAT_004bf79c int *

undefined4 func_004BF418(int param_1)

{
  char cVar1;
  bool bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(float *)(albw_frame + 0x0))
  #define local_6c (*(float *)(albw_frame + 0x4))
  #define local_68 (*(float *)(albw_frame + 0x8))
  #define local_64 (*(float *)(albw_frame + 0xc))
  #define local_60 (*(undefined4 *)(albw_frame + 0x10))
  #define local_50 (*(float *)(albw_frame + 0x20))
  #define local_4c (*(float *)(albw_frame + 0x24))
  #define local_48 (*(float *)(albw_frame + 0x28))
  uVar4 = *(uint *)(param_1 + 0x8ac);
  if ((uVar4 & 4) != 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x91a) != '\0') {
    return func_004C0DE8(param_1,param_1 + 0x8a0);
  }
  uVar13 = CONCAT44(DAT_004bf784,DAT_004bf780);
  bVar2 = false;
  pfVar8 = (float *)(param_1 + 0x87c);
  pfVar7 = (float *)(param_1 + 0x7ec);
  if ((uVar4 & 2) == 0) {
    cVar1 = *(char *)(param_1 + 0x85d);
    if (cVar1 == '\0') {
      if ((uVar4 & 1) != 0) {
        fVar11 = *(float *)(param_1 + 0x8e8);
        fVar10 = DAT_004bf790;
        pfVar6 = (float *)func_00520FC0();
        iVar5 = func_004C10C4(param_1,pfVar6,0x80000000,*(int *)(param_1 + 1000),fVar11,fVar10);
        if ((iVar5 != 0) &&
           ((*(char *)(param_1 + 0x911) == -1 ||
            (*(char *)(param_1 + 0x852) != *(char *)(param_1 + 0x911))))) goto LAB_004bf518;
      }
    }
    else {
      iVar5 = *(int *)(param_1 + 0x810);
      if (iVar5 == 0) {
        cVar1 = *(char *)(param_1 + 0x858);
      }
      if (iVar5 == 0 && cVar1 == '\x01') {
        iVar5 = func_004C10C4(param_1,pfVar7,DAT_004bf78c,*(int *)(param_1 + 1000),
                              *(float *)(param_1 + 0x8e8),DAT_004bf788);
        if (iVar5 == 0) {
          *(undefined2 *)(param_1 + 0x84c) = 0;
        }
      }
      else if (iVar5 != *(int *)(param_1 + 0x2cc)) {
LAB_004bf518:
        if (*(char *)(param_1 + 0x85d) == '\0') {
          pfVar6 = (float *)func_00520FC0();
          *pfVar7 = *pfVar6;
          *(float *)(param_1 + 0x7f0) = pfVar6[1];
          *(float *)(param_1 + 0x7f4) = pfVar6[2];
          *(float *)(param_1 + 0x7f0) = *(float *)(param_1 + 0x7f0) + ALBW_AS_F32(uVar13);
        }
        *pfVar8 = *pfVar7;
        *(undefined4 *)(param_1 + 0x880) = *(undefined4 *)(param_1 + 0x7f0);
        *(undefined4 *)(param_1 + 0x884) = *(undefined4 *)(param_1 + 0x7f4);
        local_68 = *(float *)(param_1 + 0x3d0);
        local_60 = *(undefined4 *)(param_1 + 0x3d8);
        local_64 = *(float *)(param_1 + 0x3d4) + *(float *)(param_1 + 0x838);
        func_00115C70(&local_50,pfVar8,&local_68);
        bVar2 = true;
        local_4c = local_4c * ALBW_AS_F32(((ulonglong)uVar13 >> 0x20));
        bVar9 = *(char *)(param_1 + 0x85d) != '\0';
        if (bVar9) {
          *(undefined2 *)(param_1 + 0x84c) = 0x3c;
        }
        else {
          iVar5 = func_004904CC(local_50,local_48);
          local_64 = ALBW_AS_F32((iVar5 - *(int *)(param_1 + 1000)));
          uVar4 = func_0058E2B8((int *)&local_64);
          if (uVar4 < *(uint *)(param_1 + 0x8f0)) {
            bVar9 = true;
            fVar10 = *(float *)(param_1 + 0x870) - *pfVar7;
            fVar11 = *(float *)(param_1 + 0x874) - *(float *)(param_1 + 0x7f0);
            fVar12 = *(float *)(param_1 + 0x878) - *(float *)(param_1 + 0x7f4);
            if ((int)ALBW_AS_U32((fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12)) < DAT_004bf794) {
              uVar3 = *(short *)(param_1 + 0x84e) + 1;
              *(ushort *)(param_1 + 0x84e) = uVar3;
              if (0xf0 < uVar3) {
                *(undefined2 *)(param_1 + 0x84e) = 0xf0;
                goto LAB_004bf690;
              }
            }
            else {
              *(undefined2 *)(param_1 + 0x84e) = 0;
            }
            if (DAT_004bf798 < *(int *)(param_1 + 0x834)) {
              uVar4 = func_00111A64((uint *)(*DAT_004bf79c + 0x660));
              if ((int)((ulonglong)uVar4 * 300 >> 0x20) == 0) {
                *(undefined2 *)(param_1 + 0x84c) = 0x28;
              }
            }
            else {
              *(undefined2 *)(param_1 + 0x84c) = 0x3c;
            }
          }
        }
LAB_004bf690:
        *(float *)(param_1 + 0x870) = *pfVar7;
        *(undefined4 *)(param_1 + 0x874) = *(undefined4 *)(param_1 + 0x7f0);
        *(undefined4 *)(param_1 + 0x878) = *(undefined4 *)(param_1 + 0x7f4);
        if (bVar9) goto LAB_004bf6b8;
      }
    }
  }
  *(undefined2 *)(param_1 + 0x84e) = 0;
LAB_004bf6b8:
  if (*(short *)(param_1 + 0x84c) != 0) {
    *(short *)(param_1 + 0x84c) = *(short *)(param_1 + 0x84c) + -1;
    if (!bVar2) {
      if (*(char *)(param_1 + 0x85d) == '\0') {
        pfVar6 = (float *)func_00520FC0();
        *pfVar7 = *pfVar6;
        *(float *)(param_1 + 0x7f0) = pfVar6[1];
        *(float *)(param_1 + 0x7f4) = pfVar6[2];
        *(float *)(param_1 + 0x7f0) = *(float *)(param_1 + 0x7f0) + ALBW_AS_F32(uVar13);
      }
      fVar10 = ALBW_AS_F32(((ulonglong)uVar13 >> 0x20));
      *pfVar8 = *pfVar7;
      *(undefined4 *)(param_1 + 0x880) = *(undefined4 *)(param_1 + 0x7f0);
      *(undefined4 *)(param_1 + 0x884) = *(undefined4 *)(param_1 + 0x7f4);
      local_70 = *(float *)(param_1 + 0x3d0);
      local_68 = *(float *)(param_1 + 0x3d8);
      local_6c = *(float *)(param_1 + 0x3d4) + *(float *)(param_1 + 0x838);
      func_00115C70(&local_50,pfVar8,&local_70);
      local_4c = local_4c * fVar10;
    }
    return func_004C0DE8(param_1,&local_50);
  }
  return func_004BE858(param_1);
}

