#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004A7620(int param_1,uint *param_2,uint param_3,float fparam_0,float fparam_1);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F8864(int param_1,undefined4 *param_2,uint param_3,float fparam_0);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern int func_004FB0D8(int param_1,float *param_2);
extern int func_00521078(int param_1);
extern int func_0065B158(undefined4 *param_1,undefined1 param_2);
extern undefined4 *DAT_001b33c4;
extern float DAT_001b33c8;
extern float DAT_001b33cc;
extern float DAT_001b33d0;
extern undefined4 DAT_001b33d4;
extern uint DAT_001b33d8;
extern undefined4 DAT_001b33dc;
extern float DAT_001b33e0;
extern float DAT_001b33e4;
extern int *DAT_001b33e8;

// USA 001B305C <- EU 001B305C [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_001b33c4 undefined4 *
// GLOBAL DAT_001b33c8 float
// GLOBAL DAT_001b33cc float
// GLOBAL DAT_001b33d0 float
// GLOBAL DAT_001b33d4 undefined4
// GLOBAL DAT_001b33d8 uint
// GLOBAL DAT_001b33dc undefined4
// GLOBAL DAT_001b33e0 float
// GLOBAL DAT_001b33e4 float
// GLOBAL DAT_001b33e8 int *

void func_001B305C(int *param_1)

{
  char cVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  float *pfVar7;
  int **ppiVar8;
  int *piVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 ((int * *)(albw_frame + 0x0))
  #define local_84 (*(int *)(albw_frame + 0xc))
  #define local_7c (*(undefined4 *)(albw_frame + 0x14))
  #define local_74 (*(int * *)(albw_frame + 0x1c))
  #define piStack_70 (*(int * *)(albw_frame + 0x20))
  #define local_68 (*(undefined1 *)(albw_frame + 0x28))
  #define local_64 (*(float *)(albw_frame + 0x2c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x30))
  #define fStack_5c (*(float *)(albw_frame + 0x34))
  #define local_58 (*(undefined4 *)(albw_frame + 0x38))
  #define local_54 ((byte *)(albw_frame + 0x3c))
  #define local_44 (*(uint *)(albw_frame + 0x4c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x50))
  #define local_3c (*(undefined4 *)(albw_frame + 0x54))
  #define local_38 (*(undefined4 *)(albw_frame + 0x58))
  #define local_34 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x60))
  #define local_2c (*(undefined1 *)(albw_frame + 0x64))
  #define local_2b (*(undefined1 *)(albw_frame + 0x65))
  ppiVar8 = local_90;
  iVar4 = func_004F70A8(param_1);
  if (iVar4 != 0) {
    if (0 < param_1[0x251]) {
      param_1[0x251] = param_1[0x251] + -1;
    }
    if (param_1[0x251] == 0) {
      func_00151148(param_1[0x107],0);
    }
    cVar1 = (char)param_1[0x230];
    piVar9 = param_1 + 0x22f;
    if (((cVar1 != '\t' && cVar1 != '\n') && cVar1 != '\v') &&
       (iVar4 = func_004F8998(param_1,0,(char *)0x0), iVar4 != 0)) {
      if ((char)param_1[0x230] == '\a') {
        func_0065B158(piVar9,0xb);
      }
      else {
        func_0065B158(piVar9,9);
      }
    }
    pfVar7 = (float *)param_1[0x234];
    piVar6 = (int *)(param_1[0x236] + (char)param_1[0x230] * 8);
    uVar5 = *(uint *)(param_1[0x236] + (char)param_1[0x230] * 8 + 4);
    if ((uVar5 & 1) != 0) {
      piVar6 = (int *)(*piVar6 + *(int *)((int)pfVar7 + ((int)uVar5 >> 1)));
    }
    (*(code *)*piVar6)();
    iVar4 = *piVar9;
    *piVar9 = iVar4 + 1;
    if (param_1[0x233] != 0) {
      fVar10 = (float)VectorUnsignedToFloat(iVar4 + 1,(byte)(in_fpscr >> 0x15) & 3);
      func_00352210(param_1[0x233],1,fVar10);
    }
    if ((char)param_1[0x230] != '\x04') {
      func_004FB0D8((int)param_1,(float *)(param_1 + 0xf8));
    }
    bVar2 = func_00521078((int)param_1);
    if (((bVar2) || (cVar1 = (char)param_1[0x230], cVar1 == '\t')) ||
       (cVar1 == '\x04' || cVar1 == '\x05')) {
      *(undefined2 *)(param_1 + 0x252) = 0;
    }
    else {
      uVar3 = (short)param_1[0x252] + 1;
      *(ushort *)(param_1 + 0x252) = uVar3;
      if (10 < uVar3) {
        func_0065B158(piVar9,0xc);
        *(undefined2 *)(param_1 + 0x252) = 0;
      }
    }
    func_004F48F0((int)param_1);
    cVar1 = (char)param_1[0x230];
    if (cVar1 == '\x02' || cVar1 == '\x03') {
      fVar10 = DAT_001b33cc;
      if (cVar1 != '\x03') {
        fVar10 = DAT_001b33d0;
      }
      *(float *)(*(int *)(param_1[0x104] + 0x14) + 0x10) =
           fVar10 * SQRT((ALBW_AS_F32(param_1[0xda]) - ALBW_AS_F32(param_1[0xf4])) *
                         (ALBW_AS_F32(param_1[0xda]) - ALBW_AS_F32(param_1[0xf4])) +
                         (ALBW_AS_F32(param_1[0xdc]) - ALBW_AS_F32(param_1[0xf6])) *
                         (ALBW_AS_F32(param_1[0xdc]) - ALBW_AS_F32(param_1[0xf6])));
    }
    fVar10 = DAT_001b33c8;
    func_004F8864((int)param_1,DAT_001b33c4,0,DAT_001b33c8);
    param_1[0x247] = param_1[0xda];
    param_1[0x249] = param_1[0xdc];
    param_1[0x24a] = param_1[0xf4];
    param_1[0x24c] = param_1[0xf6];
    fVar11 = ALBW_AS_F32(param_1[0x245]);
    param_1[0x248] = (int)ALBW_AS_U32(fVar11);
    param_1[0x24b] = (int)ALBW_AS_U32(fVar11);
    if ((fVar11 < ALBW_AS_F32(param_1[0xf5])) &&
       (uVar5 = (uint)(char)param_1[0x230], uVar5 == 5 || uVar5 == 4)) {
      local_54[0] = 0;
      local_54[1] = 0;
      local_54[2] = 0;
      local_54[3] = 0;
      local_44 = DAT_001b33d8 | uVar5 & 0xffff0000;
      local_54[4] = 0;
      local_54[5] = 0;
      local_54[6] = 0;
      local_54[7] = 0;
      local_54[8] = 0;
      local_54[9] = 0;
      local_54[10] = 0;
      local_54[0xb] = 0;
      local_40 = 0xff;
      local_54[0xc] = 0;
      local_54[0xd] = 0;
      local_54[0xe] = 0;
      local_54[0xf] = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = DAT_001b33d4;
      local_2c = 0;
      local_2b = 1;
      uVar12 = DAT_001b33d4;
      func_00110D44(local_90,local_54,0x2a);
      local_84 = param_1[0xb3];
      local_7c = DAT_001b33dc;
      local_68 = 0;
      local_90[0] = param_1 + 0x24a;
      local_74 = param_1 + 0x24a;
      piStack_70 = param_1 + 0x247;
      local_64 = fVar10;
      local_60 = uVar12;
      fStack_5c = fVar10;
      local_58 = uVar12;
      func_004A7620(*DAT_001b33e8,(uint *)local_90,0xff,DAT_001b33e4,DAT_001b33e0);
      param_1[0xf4] = param_1[0x24a];
      param_1[0xf6] = param_1[0x24c];
      pfVar7 = (float *)ppiVar8;
    }
    func_004F5588((int)param_1);
    func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar7);
    if (*(ushort *)(param_1 + 0x246) < 0x14) {
      *(ushort *)(param_1 + 0x246) = *(ushort *)(param_1 + 0x246) + 1;
    }
  }
  return;
}

