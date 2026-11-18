#include "ghidra_types.h"

extern int func_003FAFD8(int *param_1);
extern int func_004CE0BC(int *param_1,int param_2,int param_3,int param_4,int param_5);
extern void func_004CE804(int param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00522DDC(int param_1);
extern int *DAT_002c1460;
extern float DAT_002c1464;
extern undefined4 DAT_002c1468;

// USA 002C1294 <- EU 002C1270 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_002c1460 int *
// GLOBAL DAT_002c1464 float
// GLOBAL DAT_002c1468 undefined4

/* WARNING: Variable defined which should be unmapped: objStack_30 */

int * func_002C1294(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  uint *puVar6;
  float in_s0;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define objStack_30 ((uint *)(albw_frame + 0x0))
  #define local_24 (*(char *)(albw_frame + 0xc))
  #define local_20 (*(short *)(albw_frame + 0x10))
  #define local_1c (*(int *)(albw_frame + 0x14))
  objStack_30[0] = param_5;
  func_004CE0BC(param_1,param_2,param_3,param_4,param_5);
  uVar3 = func_00522DDC(*DAT_002c1460);
  func_004CE804((int)param_1,uVar3 & 0xffff,0,0,in_s0);
  uVar2 = DAT_002c1468;
  fVar1 = DAT_002c1464;
  uVar3 = 0;
  if (*(short *)(*(int *)(param_2 + 8) + 0x38) != 0) {
    do {
      iVar4 = *(int *)(*(int *)(*(int *)(param_2 + 8) + 0x34) + uVar3 * 0x2c);
      if (*(float *)(iVar4 + 0xc4) == fVar1) {
        *(undefined4 *)(iVar4 + 0xc4) = uVar2;
      }
      puVar5 = (ushort *)(*(int *)param_1[8] + uVar3 * 0x154);
      if (*(int *)(puVar5 + 0xa0) != 0) {
        *puVar5 = *puVar5 | 0x1000;
      }
      if (*(int *)(puVar5 + 0xa4) != 0) {
        *puVar5 = *puVar5 | 0x2000;
      }
      if (*(int *)(puVar5 + 0xa8) != 0) {
        *puVar5 = *puVar5 | 0x4000;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)(*(int *)(param_2 + 8) + 0x38));
  }
  iVar4 = *(int *)(*(int *)(*(int *)(param_2 + 8) + 0x40) + 0x10);
  objStack_30[0] = *(uint *)(iVar4 + 0x2c);
  objStack_30[1] = *(uint *)(iVar4 + 0x30);
  objStack_30[2] = *(uint *)(iVar4 + 0x2c);
  func_003FAFD8((int *)objStack_30);
  do {
    if (local_24 == '\0') {
LAB_002c13bc:
      param_1[0x7b] = 0;
      param_1[0x7a] = 0;
      puVar6 = *(uint **)(*(int *)(*(int *)(param_2 + 8) + 0x34) + 4);
      objStack_30[0] = *puVar6;
      objStack_30[1] = puVar6[1];
      objStack_30[2] = *puVar6;
      func_003FAFD8((int *)objStack_30);
      while( true ) {
        if (local_24 == '\0') {
          return param_1;
        }
        if (local_20 == 0x85) {
          param_1[0x7a] = local_1c;
        }
        if (local_20 == 0x82) {
          param_1[0x7b] = local_1c;
        }
        iVar4 = 0;
        if (param_1[0x7a] != 0) {
          iVar4 = param_1[0x7b];
        }
        if (param_1[0x7a] != 0 && iVar4 != 0) break;
        func_003FAFD8((int *)objStack_30);
      }
      return param_1;
    }
    if (local_20 == 0x2b0) {
      param_1[0x79] = local_1c;
      goto LAB_002c13bc;
    }
    func_003FAFD8((int *)objStack_30);
  } while( true );
}

