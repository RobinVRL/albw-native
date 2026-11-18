#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_002ADFE4(int param_1,int param_2,undefined1 param_3,undefined4 param_4,int param_5);
extern int func_002AE780(int param_1);
extern int func_004FB024(int param_1);
extern int func_004FB19C(int *param_1);
extern float func_004FB2F0(int param_1,float fparam_0);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern float func_0058AA40(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern undefined4 DAT_002abcc0;
extern undefined4 DAT_002abcc4;
extern undefined4 DAT_002abcc8;
extern float DAT_002abccc;
extern undefined4 DAT_002abcd0;
extern undefined4 DAT_002abcd4;
extern uint DAT_002abcd8;
extern int DAT_002abcdc;
extern uint DAT_002abce0;

// USA 002AB978 <- EU 002AB954 (Ghidra, non-matching)
// GLOBAL DAT_002abcc0 undefined4
// GLOBAL DAT_002abcc4 undefined4
// GLOBAL DAT_002abcc8 undefined4
// GLOBAL DAT_002abccc float
// GLOBAL DAT_002abcd0 undefined4
// GLOBAL DAT_002abcd4 undefined4
// GLOBAL DAT_002abcd8 uint
// GLOBAL DAT_002abcdc int
// GLOBAL DAT_002abce0 uint

/* WARNING: Variable defined which should be unmapped: objStack_30 */

void func_002AB978(int param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define objStack_30 ((uint *)(albw_frame + 0x0))
  #define local_28 (*(float *)(albw_frame + 0x8))
  func_002AE780(param_1);
  *(ushort *)(param_1 + 0x38) = *(ushort *)(param_1 + 0x38) & 0xfff7 | 1;
  *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) =
       *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) & 0xfffffffe;
  cVar2 = *(char *)(param_1 + 4);
  if (cVar2 == '\x17' || cVar2 == '\x18') {
    *(undefined1 *)(param_1 + 0x1c4) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0x34) + 0x4dc) = 1;
  }
  else if (cVar2 == '\x19' || cVar2 == '\x1a') {
    *(undefined1 *)(param_1 + 0x1c4) = 2;
    *(undefined1 *)(*(int *)(param_1 + 0x34) + 0x4dc) = 2;
  }
  else if (cVar2 == '\x1b' || cVar2 == '\x1c') {
    *(undefined1 *)(param_1 + 0x1c4) = 3;
    *(undefined1 *)(*(int *)(param_1 + 0x34) + 0x4dc) = 3;
  }
  else {
    *(undefined1 *)(param_1 + 0x1c4) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x34) + 0x4dc) = 0;
  }
  uVar7 = DAT_002abcc4;
  *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x3ac) = DAT_002abcc0;
  *(undefined4 *)(param_1 + 0x2c) = 0x1e;
  *(undefined4 *)(param_1 + 0x30) = uVar7;
  *(undefined4 *)(param_1 + 0x28) = 0;
  iVar5 = *(int *)(param_1 + 0x34);
  if ((*(uint *)(iVar5 + 0x59c) & 0x800) == 0) {
    *(undefined4 *)(param_1 + 0x1ac) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(iVar5 + 0x500);
  }
  *(uint *)(iVar5 + 0x59c) = *(uint *)(iVar5 + 0x59c) | 0x800;
  *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x504) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x4fc) = 0;
  iVar5 = *(int *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(iVar5 + 0x3d4);
  *(undefined2 *)(param_1 + 0x1e0) = 0;
  *(undefined2 *)(iVar5 + 0x50e) = *(undefined2 *)(iVar5 + 0x508);
  if (*(char *)(*(int *)(param_1 + 0x34) + 0x7fc) != '\x05') {
    func_004FB024(*(int *)(param_1 + 0x34));
  }
  fVar8 = DAT_002abccc;
  uVar4 = DAT_002abcc8;
  cVar2 = *(char *)(param_1 + 0x1c4);
  if (cVar2 == '\x01') {
    fVar6 = *(float *)(param_1 + 0x1c0);
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar6 < DAT_002abccc) << 0x1f |
            (uint)(fVar6 == DAT_002abccc) << 0x1e;
    in_fpscr = uVar1 | (uint)(NAN(fVar6) || NAN(DAT_002abccc)) << 0x1c;
    bVar3 = (byte)(uVar1 >> 0x18);
    if ((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
      fVar6 = -fVar6;
    }
    if (0x3e7fffff < (int)ALBW_AS_U32(fVar6)) goto LAB_002abb18;
    uVar9 = DAT_002abcc8;
    func_004FB19C(*(int **)(param_1 + 0x34));
    uVar4 = DAT_002abcd0;
    *(undefined4 *)(param_1 + 0x1d8) = 0xc;
    *(undefined4 *)(param_1 + 0x1dc) = uVar4;
    *(undefined4 *)(param_1 + 0x1d4) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0x1e;
    *(undefined4 *)(param_1 + 0x30) = uVar7;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(uint *)(*(int *)(param_1 + 0x34) + 0x2e0) = *(uint *)(*(int *)(param_1 + 0x34) + 0x2e0) | 2;
    *(undefined1 *)(param_1 + 0x24) = 2;
    *(undefined4 *)(param_1 + 0x1cc) = 10;
    *(undefined4 *)(param_1 + 0x1d0) = uVar9;
  }
  else {
LAB_002abb18:
    if (*(char *)(param_1 + 4) != '\x15' && *(char *)(param_1 + 4) != '\x17') {
      *(undefined1 *)(param_1 + 0x24) = 1;
      uVar7 = DAT_002abcd4;
      *(undefined4 *)(param_1 + 0x2c) = 0x2d;
      *(undefined4 *)(param_1 + 0x30) = uVar7;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x1cc) = 10;
      *(undefined4 *)(param_1 + 0x1d0) = uVar4;
      *(undefined4 *)(param_1 + 0x1c8) = 0;
      if (cVar2 == '\x01') {
LAB_002abb8c:
        fVar6 = *(float *)(param_1 + 0x1c0);
        uVar1 = in_fpscr & 0xfffffff | (uint)(fVar6 < fVar8) << 0x1f |
                (uint)(fVar6 == fVar8) << 0x1e;
        in_fpscr = uVar1 | (uint)(NAN(fVar6) || NAN(fVar8)) << 0x1c;
        bVar3 = (byte)(uVar1 >> 0x18);
        if ((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
          fVar6 = -fVar6;
        }
        if ((int)ALBW_AS_U32(fVar6) <= DAT_002abcdc) goto LAB_002abbc4;
      }
      else {
        if (cVar2 == '\x02') goto LAB_002abbc4;
        if (cVar2 == '\x03') goto LAB_002abb8c;
      }
      objStack_30[0] = DAT_002abcd8;
      objStack_30[1] = DAT_002abce0;
      func_00150A84(*(int **)(param_1 + 0x34),(int *)objStack_30,0);
      goto LAB_002abbc4;
    }
    *(undefined1 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x1cc) = 0x1e;
    *(undefined4 *)(param_1 + 0x1d0) = uVar7;
  }
  *(undefined4 *)(param_1 + 0x1c8) = 0;
LAB_002abbc4:
  fVar8 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x1cc) - *(int *)(param_1 + 0x1c8),
                                     (byte)(in_fpscr >> 0x15) & 3);
  func_00115C70((float *)objStack_30,(float *)(param_1 + 0x1b4),
                (float *)(*(int *)(param_1 + 0x34) + 0x3d0));
  *(float *)(param_1 + 0x3c) = ALBW_AS_F32(objStack_30[0]) / fVar8;
  *(float *)(param_1 + 0x44) = local_28 / fVar8;
  func_0058AB74(*(int *)(param_1 + 0x34));
  func_0058AA40(*(undefined4 *)(param_1 + 0x34));
  *(undefined1 *)(*(int *)(param_1 + 0x34) + 0x82a) = 0;
  *(undefined1 *)(param_1 + 0x113) = 0;
  cVar2 = *(char *)(param_1 + 0x1c4);
  if (cVar2 == '\x01') {
    objStack_30[0] = 0;
    func_002ADFE4(param_1,0x17,0x1f,0,0);
  }
  else if (cVar2 == '\x02') {
    objStack_30[0] = 0;
    func_002ADFE4(param_1,0x19,0x1f,0,0);
  }
  else {
    objStack_30[0] = 0;
    if (cVar2 == '\x03') {
      func_002ADFE4(param_1,0x1b,0x1f,0,0);
    }
    else {
      func_002ADFE4(param_1,0x15,0x1f,0,0);
    }
  }
  if (-1 < *(short *)(param_1 + 0x1e2)) {
    func_004FC07C(*(int *)(param_1 + 0x34),(int)*(short *)(param_1 + 0x1e2),10,0);
  }
  func_0058AB74(*(int *)(param_1 + 0x34));
  fVar8 = func_0058AA40(*(undefined4 *)(param_1 + 0x34));
  func_004FB2F0(*(int *)(param_1 + 0x34),fVar8);
  return;
}

