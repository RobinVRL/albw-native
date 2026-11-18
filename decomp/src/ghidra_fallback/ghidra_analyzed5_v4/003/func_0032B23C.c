#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern undefined4 func_0032C1EC(int param_1);
extern int func_0036E490(byte *param_1,uint param_2,undefined4 param_3);
extern undefined8 func_0058AB74(int param_1);
extern int func_00665670(undefined4 *param_1,undefined1 param_2);
extern int func_00691F30(uint param_1,uint param_2);
extern int DAT_0032b524;
extern float DAT_0032b528;
extern undefined4 *DAT_0032b52c;
extern uint DAT_0032b530;
extern uint DAT_0032b534;
extern uint DAT_0032b538;
extern uint DAT_0032b53c;
extern float DAT_0032b540;
extern char s_SE_BlackShueyes_BODY_ATTACK_0032b508[];

// USA 0032B23C <- EU 0032B218 (Ghidra, non-matching)
// GLOBAL DAT_0032b524 int
// GLOBAL DAT_0032b528 float
// GLOBAL DAT_0032b52c undefined4 *
// GLOBAL DAT_0032b530 uint
// GLOBAL DAT_0032b534 uint
// GLOBAL DAT_0032b538 uint
// GLOBAL DAT_0032b53c uint
// GLOBAL DAT_0032b540 float
// GLOBAL s_SE_BlackShueyes_BODY_ATTACK_0032b508 string

undefined4 func_0032B23C(int param_1)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  uint uVar9;
  undefined8 uVar10;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  local_38 = DAT_0032b524;
  local_34 = s_SE_BlackShueyes_BODY_ATTACK_0032b508;
  func_001507D8(param_1,&local_38,0);
  if ((*(char *)(param_1 + 0x8f8) == '\t' || *(char *)(param_1 + 0x8f8) == '\n') ||
     (*(char *)(param_1 + 0x9d0) == '\t' || *(char *)(param_1 + 0x9d0) == '\n')) {
    iVar1 = *(int *)(param_1 + 0x994);
    bVar7 = iVar1 == 0;
    if (bVar7) {
      iVar1 = *(int *)(param_1 + 0xa6c);
    }
    if (bVar7 && iVar1 == 0) {
      func_0036E490((byte *)(param_1 + 0x8f8),0xb,*(undefined4 *)(param_1 + 0x8c4));
      func_0036E490((byte *)(param_1 + 0x9d0),0xb,*(undefined4 *)(param_1 + 0x99c));
    }
  }
  uVar10 = func_0058AB74(param_1);
  bVar7 = true;
  if ((int)uVar10 != 0xc) {
    *(undefined1 *)(param_1 + 0xc9a) = 1;
    return 0;
  }
  if (*(char *)(param_1 + 0xc9a) != '\0') {
    if (*(int *)(param_1 + 1000) != *(int *)(param_1 + 0xc40)) {
LAB_0032b578:
      return func_0032C1EC(param_1);
    }
    iVar1 = *(int *)(param_1 + 0x994);
    bVar7 = iVar1 != 0;
    if (!bVar7) {
      iVar1 = *(int *)(param_1 + 0xa6c);
    }
    if (((bVar7 || iVar1 != 0) ||
        ((*(char *)(param_1 + 0x963) != '\0' && (*(char *)(param_1 + 0x964) == '\0')))) ||
       ((*(char *)(param_1 + 0xa3b) != '\0' && (*(char *)(param_1 + 0xa3c) == '\0'))))
    goto LAB_0032b578;
    goto LAB_0032b4f0;
  }
  uVar3 = *(int *)(param_1 + 0xa74) + 1;
  *(uint *)(param_1 + 0xa74) = uVar3;
  uVar5 = DAT_0032b53c;
  if (uVar3 < *(uint *)(param_1 + 0xa78)) {
LAB_0032b3f8:
    *(int *)(param_1 + 1000) = *(int *)(param_1 + 0xc3c) + *(int *)(param_1 + 1000);
    return 0;
  }
  uVar3 = *(uint *)(param_1 + 0xc3c);
  uVar4 = *(uint *)(param_1 + 1000);
  uVar6 = *(uint *)(param_1 + 0xc40);
  fVar8 = (float)VectorSignedToFloat(*DAT_0032b52c,(byte)(in_fpscr >> 0x15) & 3);
  if ((int)(fVar8 * DAT_0032b528) < (int)uVar3) {
    *(uint *)(param_1 + 0xc3c) = uVar3 - *(int *)(param_1 + 0xa7c);
    goto LAB_0032b3f8;
  }
  if (uVar4 < uVar6) {
    if (DAT_0032b530 <= uVar6 - uVar4) goto LAB_0032b3f8;
  }
  else if (uVar4 - uVar6 < DAT_0032b534) goto LAB_0032b3f8;
  if (uVar3 < DAT_0032b538) {
    uVar3 = DAT_0032b538;
  }
  if (uVar6 < uVar4) {
    fVar8 = DAT_0032b540;
    fVar2 = ALBW_AS_F32(func_00691F30(uVar6 - uVar4,(uint)(uVar4 <= uVar6)));
    uVar9 = VectorFloatToUnsigned(fVar2 * fVar8,3);
    if ((uVar9 < uVar3) && (uVar3 = uVar9, uVar9 <= uVar5)) {
      uVar3 = uVar5;
    }
    uVar3 = uVar4 + uVar3;
    bVar7 = uVar3 == uVar6;
  }
  else {
    fVar8 = (float)VectorUnsignedToFloat(uVar6 - uVar4,(byte)(in_fpscr >> 0x15) & 3);
    uVar9 = VectorFloatToUnsigned(fVar8 * DAT_0032b540,3);
    if ((DAT_0032b53c <= uVar9) && (uVar5 = uVar9, uVar3 < uVar9)) {
      uVar5 = uVar3;
    }
    uVar3 = uVar6;
    if (uVar4 < uVar6) {
      uVar5 = uVar4 + uVar5;
      if ((uVar5 < uVar6) && (uVar4 <= uVar5)) {
LAB_0032b46c:
        bVar7 = false;
        uVar3 = uVar5;
      }
    }
    else {
      uVar3 = uVar4;
      if (((uVar4 != uVar6) && (uVar5 = uVar4 - uVar5, uVar3 = uVar6, uVar6 < uVar5)) &&
         (uVar5 <= uVar4)) goto LAB_0032b46c;
    }
  }
  *(uint *)(param_1 + 1000) = uVar3;
  if (!bVar7) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xc3c) = 0;
  if (*(int *)(param_1 + 0x994) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0xa6c) != 0) {
    return 0;
  }
  if ((*(char *)(param_1 + 0x963) != '\0') && (*(char *)(param_1 + 0x964) == '\0')) {
    return 0;
  }
  if ((*(char *)(param_1 + 0xa3b) != '\0') && (*(char *)(param_1 + 0xa3c) == '\0')) {
    return 0;
  }
LAB_0032b4f0:
  return func_00665670((undefined4 *)(param_1 + 0xba8),6);
}

