#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_001788DC(int param_1,undefined4 *param_2);
extern undefined4 func_002316CC(int param_1,float fparam_0);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_0054D224(int *param_1);
extern int func_005823E0(int param_1,int *param_2,int *param_3);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int func_00583794(int *param_1,int *param_2);
extern int *DAT_0045e080;
extern undefined4 DAT_0045e084;
extern float DAT_0045e088;
extern int DAT_0045e08c;
extern int DAT_0045e09c;
extern float DAT_0045e0a0;
extern float DAT_0045e0a4;
extern int DAT_0045e0a8;
extern float DAT_0045e0ac;
extern int DAT_0045e0b0;
extern undefined DAT_0045e0b4;
extern int *DAT_0045e0c4;
extern undefined4 DAT_0045e0c8;
extern int DAT_0045e0cc;
extern int DAT_0045e0d0;
extern int *DAT_0045e0d4;
extern int *DAT_0045e0d8;
extern float DAT_0045e218;
extern int DAT_0045e21c;
extern char s_P_Sword_00_0045e090[];
extern char s___P_Shield_00_0045e0b6[];
extern char s_cf_0045e0b6[];
extern undefined4 _DAT_0045e0b4;

// USA 0045DCB0 <- EU 0045DC88 (Ghidra, non-matching)
// GLOBAL DAT_0045e080 int *
// GLOBAL DAT_0045e084 undefined4
// GLOBAL DAT_0045e088 float
// GLOBAL DAT_0045e08c int
// GLOBAL DAT_0045e09c int
// GLOBAL DAT_0045e0a0 float
// GLOBAL DAT_0045e0a4 float
// GLOBAL DAT_0045e0a8 int
// GLOBAL DAT_0045e0ac float
// GLOBAL DAT_0045e0b0 int
// GLOBAL DAT_0045e0b4 undefined
// GLOBAL DAT_0045e0c4 int *
// GLOBAL DAT_0045e0c8 undefined4
// GLOBAL DAT_0045e0cc int
// GLOBAL DAT_0045e0d0 int
// GLOBAL DAT_0045e0d4 int *
// GLOBAL DAT_0045e0d8 int *
// GLOBAL DAT_0045e218 float
// GLOBAL DAT_0045e21c int
// GLOBAL s_cf_0045e0b6 string
// GLOBAL s_P_Sword_00_0045e090 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_0045DCB0(int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar13;
  undefined8 uVar12;
  _Alignas(8) unsigned char albw_frame[0x230];
  #define local_230 (*(int *)(albw_frame + 0x0))
  #define local_22c (*(char * *)(albw_frame + 0x4))
  #define uStack_228 (*(undefined4 *)(albw_frame + 0x8))
  #define local_224 ((undefined2 *)(albw_frame + 0xc))
  #define local_1e6 (*(undefined2 *)(albw_frame + 0x4a))
  #define auStack_1e0 ((undefined4 *)(albw_frame + 0x50))
  #define local_1d8 (*(byte *)(albw_frame + 0x58))
  #define local_1d7 (*(byte *)(albw_frame + 0x59))
  #define local_1b9 (*(byte *)(albw_frame + 0x77))
  #define local_40 ((int *)(albw_frame + 0x1f0))
  #define local_2c (*(char * *)(albw_frame + 0x204))
  piVar7 = DAT_0045e080;
  func_00110D44(auStack_1e0,
                (byte *)(*DAT_0045e080 +
                         (int)(short)(ushort)*(byte *)(param_1 + 0x168) * (int)(short)DAT_0045e084 *
                         4 + 0xa8c),0x1a0);
  iVar5 = DAT_0045e08c;
  fVar11 = (float)VectorUnsignedToFloat((uint)local_1d8,(byte)(in_fpscr >> 0x15) & 3);
  fVar10 = (float)VectorUnsignedToFloat((uint)local_1b9,(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = (float)VectorUnsignedToFloat((uint)local_1d7,(byte)(in_fpscr >> 0x15) & 3);
  fVar13 = DAT_0045e088;
  if ((int)ALBW_AS_U32(fVar11) < 0x40000000) {
    local_22c = s_P_Sword_00_0045e090;
    local_230 = DAT_0045e08c;
    iVar3 = func_005229AC(*(int **)(param_1 + 0x1c),&local_230);
    if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x44) & 1) != 0)) {
      *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
    }
  }
  else {
    iVar8 = *(int *)(param_1 + 0x1c);
    local_22c = s_P_Sword_00_0045e090;
    local_230 = DAT_0045e08c;
    iVar3 = func_005229AC(*(int **)(param_1 + 0x1c),&local_230);
    if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x44) & 1) == 0)) {
      *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe | 1;
      *(byte *)(iVar8 + 0x70) = *(byte *)(iVar8 + 0x70) | 2;
    }
    if (DAT_0045e09c < (int)ALBW_AS_U32(fVar11)) {
      fVar11 = DAT_0045e0a0;
    }
    func_002316CC(param_1 + 0xec,fVar11 - fVar13);
  }
  uVar12 = CONCAT44(fVar13,DAT_0045e0a4);
  if ((int)ALBW_AS_U32(fVar10) < 0x40000000) {
    func_002316CC(param_1 + 0xf8,DAT_0045e0a4);
  }
  else {
    if (DAT_0045e0a8 < (int)ALBW_AS_U32(fVar10)) {
      fVar10 = DAT_0045e0ac;
    }
    func_002316CC(param_1 + 0xf8,fVar10 - fVar13);
  }
  if ((int)ALBW_AS_U32(fVar9) < 0x40000000) {
    local_22c = s___P_Shield_00_0045e0b6 + 2;
    local_230 = iVar5;
    iVar3 = func_005229AC(*(int **)(param_1 + 0x1c),&local_230);
    fVar11 = ALBW_AS_F32(uVar12);
    if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x44) & 1) != 0)) {
      *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x1c);
    local_230 = iVar5;
    local_22c = s___P_Shield_00_0045e0b6 + 2;
    if (DAT_0045e0b0 < (int)ALBW_AS_U32(fVar9)) {
      fVar9 = ALBW_AS_F32(_DAT_0045e0b4);
    }
    iVar8 = func_005229AC(*(int **)(param_1 + 0x1c),&local_230);
    if ((iVar8 != 0) && ((*(byte *)(iVar8 + 0x44) & 1) == 0)) {
      *(byte *)(iVar8 + 0x44) = *(byte *)(iVar8 + 0x44) & 0xfe | 1;
      *(byte *)(iVar3 + 0x70) = *(byte *)(iVar3 + 0x70) | 2;
    }
    func_002316CC(param_1 + 0x104,fVar9 - ALBW_AS_F32(((ulonglong)uVar12 >> 0x20)));
    fVar11 = ALBW_AS_F32(uVar12);
  }
  piVar1 = DAT_0045e0c4;
  local_40[0] = 0;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0xffffffff;
  if (*(int *)(param_1 + 0x144) != 0) {
    local_230 = iVar5;
    iVar3 = DAT_0045e0cc;
    if (*(char *)(*piVar7 + (int)(short)(ushort)*(byte *)(param_1 + 0x168) *
                            (int)(short)DAT_0045e084 * 4 + 0x1742) == '\0') {
      iVar3 = DAT_0045e0d0;
    }
    local_22c = *(char **)(iVar3 + 4);
    iVar3 = func_005826A4(*DAT_0045e0c4,local_40,DAT_0045e0d4,&local_230);
    if (iVar3 != 0) {
      *(ushort *)(*(int *)(param_1 + 0x140) + 0x60) = *(byte *)(param_1 + 0x168) + 1;
      func_001788DC(*(int *)(param_1 + 0x140),local_40);
      iVar3 = *(int *)(param_1 + 0x140);
      piVar4 = *(int **)(param_1 + 0x144);
      *(undefined2 *)(iVar3 + 0x32) = 0;
      *(undefined1 *)(iVar3 + 0x3d) = 0;
      (**(code **)(*piVar4 + 0x60))
                (piVar4,*(undefined4 *)(*(int *)(param_1 + 0x140) + 8),0,
                 *(ushort *)(*(int *)(param_1 + 0x140) + 0x20) >> 1);
    }
  }
  if ((*(int *)(param_1 + 0x148) != 0) &&
     (iVar3 = func_005826A4(*piVar1,local_40,DAT_0045e0d8 + -8,DAT_0045e0d8), iVar3 != 0)) {
    *(undefined2 *)(*(int *)(param_1 + 0x140) + 0x60) =
         *(undefined2 *)
          (*piVar7 + (int)(short)(ushort)*(byte *)(param_1 + 0x168) * (int)(short)DAT_0045e084 * 4 +
          0xb5a);
    func_001788DC(*(int *)(param_1 + 0x140),local_40);
    iVar3 = *(int *)(param_1 + 0x140);
    piVar4 = *(int **)(param_1 + 0x148);
    *(undefined2 *)(iVar3 + 0x32) = 0;
    *(undefined1 *)(iVar3 + 0x3d) = 0;
    (**(code **)(*piVar4 + 0x60))
              (piVar4,*(undefined4 *)(*(int *)(param_1 + 0x140) + 8),0,
               *(ushort *)(*(int *)(param_1 + 0x140) + 0x20) >> 1);
  }
  piVar4 = (int *)(*piVar7 + 0x9cc +
                  (int)(short)(ushort)*(byte *)(param_1 + 0x168) * (int)(short)DAT_0045e084 * 4);
  iVar3 = *piVar4;
  if (iVar3 != 10) {
    if (iVar3 < 0xb) {
      if ((iVar3 != 0 && iVar3 != 2) && (iVar3 != 4 && iVar3 != 9)) {
LAB_0045e054:
        bVar2 = func_0054D224(piVar4);
        if (!bVar2) {
          func_002316CC(param_1 + 0x11c,DAT_0045e218);
          goto LAB_0045e104;
        }
      }
    }
    else if ((iVar3 != 0xb && iVar3 != 0xc) && (iVar3 != 0x12 && iVar3 != 0x16)) goto LAB_0045e054;
  }
  func_002316CC(param_1 + 0x11c,fVar11);
LAB_0045e104:
  local_40[4] = iVar5;
  local_2c = (char *)(*piVar7 + (int)(short)(ushort)*(byte *)(param_1 + 0x168) *
                                (int)(short)DAT_0045e084 * 4 + 0x9d8);
  if (*local_2c == '\0') {
    iVar5 = *(int *)(param_1 + 0x14c);
    if (iVar5 != 0) {
      if ((*(byte *)(iVar5 + 0x44) & 1) != 0) {
        *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe;
      }
      return;
    }
  }
  else {
    iVar5 = func_005823E0(*piVar1,local_40,local_40 + 4);
    if (iVar5 != 0) {
      local_22c = (char *)local_224;
      uStack_228 = 0x20;
      local_1e6 = 0;
      local_230 = DAT_0045e21c;
      local_224[0] = 0;
      uVar6 = func_00583794(local_40,&local_230);
      piVar7 = *(int **)(param_1 + 0x14c);
      (**(code **)(local_230 + 8))(&local_230);
      (**(code **)(*piVar7 + 0x60))(piVar7,local_22c,0,uVar6 & 0xffff);
      iVar3 = *(int *)(param_1 + 0x1c);
      iVar5 = *(int *)(param_1 + 0x14c);
      if ((iVar5 != 0) && ((*(byte *)(iVar5 + 0x44) & 1) == 0)) {
        *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe | 1;
        *(byte *)(iVar3 + 0x70) = *(byte *)(iVar3 + 0x70) | 2;
      }
    }
  }
  return;
}

