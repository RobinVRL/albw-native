#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00556EAC(int param_1,int param_2);
extern int func_0066B94C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00512e2c;
extern float DAT_00512e30;
extern uint DAT_00512e48;
extern char s_SE_KinSta_HARDEN_00512e34[];

// USA 00512D50 <- EU 00512D28 (Ghidra, non-matching)
// GLOBAL DAT_00512e2c int *
// GLOBAL DAT_00512e30 float
// GLOBAL DAT_00512e48 uint
// GLOBAL s_SE_KinSta_HARDEN_00512e34 string

/* WARNING: Variable defined which should be unmapped: objStack_18 */

void func_00512D50(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define objStack_18 ((uint *)(albw_frame + 0x8))
  *(undefined1 *)(param_1 + 0x156) = 0;
  objStack_18[0] = 0;
  objStack_18[1] = 0;
  func_0014E2A0((int)param_1,param_1[0x134],param_1 + 0x135,0x1600,0,0);
  piVar3 = param_1 + 0x123;
  if ((char)param_1[0x156] != '\0') {
    func_0066B94C(piVar3,6);
  }
  bVar1 = func_00556EAC(*DAT_00512e2c,0xaa);
  if (bVar1) {
    func_0066B94C(piVar3,7);
  }
  iVar2 = *(int *)(param_1[300] + 0x14);
  if (*(char *)(iVar2 + 0x1c) == '\0') {
    if (*(float *)(iVar2 + 0x10) < DAT_00512e30) {
      if (DAT_00512e30 < *(float *)(iVar2 + 8)) {
        return;
      }
    }
    else if (*(float *)(iVar2 + 8) != *(float *)(iVar2 + 0x14)) {
      return;
    }
    objStack_18[1] = (uint)s_SE_KinSta_HARDEN_00512e34;
    objStack_18[0] = DAT_00512e48;
    func_00150A84(param_1,(int *)objStack_18,0);
    func_0066B94C(piVar3,1);
  }
  return;
}

