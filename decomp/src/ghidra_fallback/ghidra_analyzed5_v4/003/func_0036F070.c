#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_00328E30(int param_1,int param_2,uint param_3);
extern int func_0032A2C0(int param_1,int param_2,undefined1 param_3);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_004D80EC(float *param_1,float *param_2,int param_3);
extern int *DAT_0036f258;
extern int DAT_0036f25c;
extern int *DAT_0036f260;
extern float DAT_0036f264;
extern float DAT_0036f268;
extern int DAT_0036f26c;
extern int *DAT_0036f270;
extern int DAT_0036f274;
extern float DAT_0036f278;

// USA 0036F070 <- EU 0036F04C (Ghidra, non-matching)
// GLOBAL DAT_0036f258 int *
// GLOBAL DAT_0036f25c int
// GLOBAL DAT_0036f260 int *
// GLOBAL DAT_0036f264 float
// GLOBAL DAT_0036f268 float
// GLOBAL DAT_0036f26c int
// GLOBAL DAT_0036f270 int *
// GLOBAL DAT_0036f274 int
// GLOBAL DAT_0036f278 float

undefined4 func_0036F070(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float *pfVar8;
  float *pfVar9;
  uint in_fpscr;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  func_00328E30(param_2,(int)*(char *)(param_1 + 0x6a),2);
  if (*(char *)(param_1 + 0x6a) == '\0') {
    pfVar8 = (float *)(param_2 + 8);
    pfVar9 = *(float **)(*DAT_0036f258 + 0x1c);
    func_00115C70(&local_30,(float *)(param_2 + 0xc30),pfVar8);
    func_00115C70(&local_24,pfVar9,pfVar8);
    if ((local_30 == local_24) && (local_28 == local_1c)) {
      local_30 = *(float *)(param_2 + 0xc30);
      uVar5 = *(undefined4 *)(param_2 + 0xc34);
      local_28 = *(float *)(param_2 + 0xc38);
    }
    else {
      local_20 = DAT_0036f268;
      local_2c = DAT_0036f268;
      if (local_28 * local_24 - local_30 * local_1c <= DAT_0036f268) {
        func_004D7F70(&local_30,-*DAT_0036f270);
      }
      else {
        func_004D7F70(&local_30,*(uint *)(DAT_0036f26c + 0x18));
      }
      func_00115DC8(&local_30);
      func_00115D70(&local_30,&local_30,SQRT(local_24 * local_24 + local_1c * local_1c));
      func_00115C54(&local_30,&local_30,pfVar8);
      uVar5 = *(undefined4 *)(param_2 + 0xc34);
      local_2c = ALBW_AS_F32(uVar5);
    }
    *(float *)(param_1 + 0x10) = local_30;
    *(undefined4 *)(param_1 + 0x14) = uVar5;
    *(float *)(param_1 + 0x18) = local_28;
    iVar2 = func_004D80EC((float *)(param_1 + 4),(float *)(param_1 + 0x10),0);
    fVar10 = DAT_0036f278;
    *(int *)(param_1 + 0x4c) = iVar2 + DAT_0036f274;
  }
  else {
    puVar4 = *(undefined4 **)(*DAT_0036f258 + 0x1c);
    uVar6 = *puVar4;
    uVar7 = puVar4[1];
    uVar5 = puVar4[2];
    *(undefined4 *)(param_1 + 0x18) = uVar5;
    *(undefined4 *)(param_1 + 0x10) = uVar6;
    *(undefined4 *)(param_1 + 0x14) = uVar7;
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    uVar7 = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_2 + 0xc38) = uVar5;
    *(undefined4 *)(param_2 + 0xc30) = uVar6;
    *(undefined4 *)(param_2 + 0xc34) = uVar7;
    iVar2 = func_004D80EC((float *)(param_1 + 4),(float *)(param_1 + 0x10),0);
    piVar1 = DAT_0036f260;
    *(int *)(param_1 + 0x4c) = iVar2 + DAT_0036f25c;
    uVar3 = func_00111A64((uint *)(*piVar1 + 0x660));
    fVar10 = (float)VectorUnsignedToFloat
                              ((int)((ulonglong)uVar3 * 3 >> 0x20),(byte)(in_fpscr >> 0x15) & 3);
    fVar10 = fVar10 + DAT_0036f264;
  }
  *(float *)(param_1 + 0x60) = fVar10;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 100) = 0x1e;
  return func_0032A2C0(param_2,(int)*(char *)(param_1 + 0x6a),1);
}

