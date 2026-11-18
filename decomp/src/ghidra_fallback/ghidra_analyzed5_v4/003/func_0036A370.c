#include "ghidra_types.h"

extern int func_002DF0B0(int param_1,int *param_2,int param_3);
extern int func_0034C47C(int param_1,int param_2);
extern void func_0034C4C0(int param_1,uint param_2,int param_3,float fparam_0);
extern int func_0034C57C(int param_1,int param_2);
extern int func_005568D4(int param_1);
extern int func_00666E8C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0036a56c;
extern undefined4 DAT_0036a584;
extern int *DAT_0036a588;
extern float DAT_0036a5a0;
extern float DAT_0036a5a4;
extern float DAT_0036a5a8;
extern int DAT_0036a5ac;
extern float DAT_0036a5b0;
extern char s_SE_S_RUPEE_DOWN_FIN_0036a58c[];
extern char s_SE_S_RUPEE_UP_FIN_0036a570[];

// USA 0036A370 <- EU 0036A34C (Ghidra, non-matching)
// GLOBAL DAT_0036a56c int *
// GLOBAL DAT_0036a584 undefined4
// GLOBAL DAT_0036a588 int *
// GLOBAL DAT_0036a5a0 float
// GLOBAL DAT_0036a5a4 float
// GLOBAL DAT_0036a5a8 float
// GLOBAL DAT_0036a5ac int
// GLOBAL DAT_0036a5b0 float
// GLOBAL s_SE_S_RUPEE_DOWN_FIN_0036a58c string
// GLOBAL s_SE_S_RUPEE_UP_FIN_0036a570 string

undefined4 func_0036A370(int param_1,float fparam_0)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  int *piVar5;
  float *pfVar6;
  uint uVar7;
  uint in_fpscr;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  iVar2 = DAT_0036a5ac;
  if (*(int *)(param_1 + 0x3c) < 5) {
    uVar7 = 0;
    fVar12 = DAT_0036a5a0;
    fVar13 = DAT_0036a5a4;
    fVar10 = DAT_0036a5b0;
    fVar11 = DAT_0036a5a8;
    do {
      if (((uint)*(byte *)(param_1 + 0x78) & 1 << (uVar7 & 0xff)) != 0) {
        pfVar4 = (float *)(param_1 + 0x80);
        if (uVar7 < 4) {
          pfVar4 = pfVar4 + uVar7;
        }
        fVar9 = fVar12;
        if (*(int *)(param_1 + 0x68) <= *(int *)(param_1 + 0x6c)) {
          fVar9 = fVar13;
        }
        pfVar6 = (float *)(param_1 + 0x80);
        if (uVar7 < 4) {
          pfVar6 = pfVar6 + uVar7;
        }
        *pfVar4 = fVar9 + *pfVar4;
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar11 <= *pfVar6) << 0x1d;
        if (!SUB41(in_fpscr >> 0x1d,0)) {
          pfVar4 = (float *)(param_1 + 0x80);
          if (uVar7 < 4) {
            pfVar4 = pfVar4 + uVar7;
          }
          *pfVar4 = *pfVar4 + fVar10;
        }
        piVar5 = (int *)(param_1 + 0x80);
        if (uVar7 < 4) {
          piVar5 = piVar5 + uVar7;
        }
        if (iVar2 <= *piVar5) {
          pfVar4 = (float *)(param_1 + 0x80);
          if (uVar7 < 4) {
            pfVar4 = pfVar4 + uVar7;
          }
          *pfVar4 = *pfVar4 - fVar10;
        }
        pfVar4 = (float *)(param_1 + 0x80);
        if (uVar7 < 4) {
          pfVar4 = pfVar4 + uVar7;
        }
        pfVar6 = (float *)(param_1 + 0x80);
        if (uVar7 < 4) {
          pfVar6 = pfVar6 + uVar7;
        }
        fVar9 = (float)VectorSignedToFloat((int)*pfVar4,(byte)(in_fpscr >> 0x15) & 3);
        func_0034C4C0(*(int *)(param_1 + 0x60),uVar7,(int)*pfVar4,*pfVar6 - fVar9);
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < 4);
    return 0;
  }
  func_0034C57C(*(int *)(param_1 + 0x60),*(int *)(param_1 + 0x68));
  piVar5 = DAT_0036a56c;
  uVar8 = ALBW_AS_U32(VectorSignedToFloat(*(undefined4 *)(param_1 + 0x68),(byte)(in_fpscr >> 0x15) & 3));
  *(undefined4 *)(param_1 + 0x74) = uVar8;
  iVar2 = *piVar5;
  if ((iVar2 != 0) && (uVar1 = func_005568D4(iVar2), *(uint *)(param_1 + 0x68) != (uint)uVar1)) {
    iVar2 = *piVar5;
    uVar1 = func_005568D4(iVar2);
    uVar3 = *(int *)(param_1 + 0x68) - (uint)uVar1;
    uVar7 = (int)uVar3 >> 0x1f;
    if ((int)((uVar3 ^ uVar7) - uVar7) < 2) {
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x68);
      uVar1 = func_005568D4(iVar2);
      *(uint *)(param_1 + 0x68) = (uint)uVar1;
      func_00666E8C((undefined4 *)(param_1 + 0x3c),1);
    }
    else {
      func_00666E8C((undefined4 *)(param_1 + 0x3c),0);
    }
    func_0034C47C(*(int *)(param_1 + 0x60),0);
    piVar5 = DAT_0036a588;
    uVar8 = DAT_0036a584;
    local_2c = s_SE_S_RUPEE_UP_FIN_0036a570;
    local_30 = DAT_0036a584;
    func_002DF0B0(*DAT_0036a588,&local_30,0);
    local_2c = s_SE_S_RUPEE_DOWN_FIN_0036a58c;
    local_30 = uVar8;
    return func_002DF0B0(*piVar5,&local_30,0);
  }
  return func_00666E8C((undefined4 *)(param_1 + 0x3c),2);
}

