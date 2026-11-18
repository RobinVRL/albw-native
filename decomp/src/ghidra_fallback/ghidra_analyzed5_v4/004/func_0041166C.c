#include "ghidra_types.h"

extern int func_001022F4(void);
extern int func_0010EE40(void);
extern int func_0041252C(int param_1,uint param_2,int param_3,int param_4,undefined4 param_5,int param_6);
extern int func_00413470(int param_1);
extern int func_004134E4(int *param_1,int *param_2,int param_3);
extern int func_00569AB8(int param_1,uint param_2,undefined4 *param_3);
extern int func_0056ACF4(int param_1);
extern int func_0056AD24(int param_1);
extern int func_0056CBF8(int param_1,uint param_2);
extern undefined4 *DAT_004117d0;

// USA 0041166C <- EU 0041164C (Ghidra, non-matching)
// GLOBAL DAT_004117d0 undefined4 *

/* WARNING: Variable defined which should be unmapped: objStack_b0 */

int * func_0041166C(int *param_1,uint param_2,int *param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define objStack_b0 ((uint *)(albw_frame + 0x0))
  #define auStack_a0 ((undefined1 *)(albw_frame + 0x10))
  #define aiStack_38 ((int *)(albw_frame + 0x78))
  uVar2 = func_0056CBF8(param_1[1],param_2);
  piVar3 = (int *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
  if (piVar3 == (int *)0x0) {
    objStack_b0[0] = 0xffffffff;
    (*(undefined1 *)((char *)&objStack_b0[2] + 0)) = 0;
    bVar1 = func_00569AB8(param_1[1],param_2,objStack_b0);
    uVar8 = objStack_b0[1];
    piVar3 = (int *)0x0;
    if ((bVar1) && (piVar3 = (int *)0x0, objStack_b0[1] != 0)) {
      objStack_b0[0] = 0;
      objStack_b0[1] = param_4;
      iVar4 = func_0041252C((int)param_1,uVar2,(int)auStack_a0,0x2c,0,param_4);
      if (iVar4 == 0x2c) {
        uVar5 = func_0056ACF4((int)auStack_a0);
        uVar6 = func_0056AD24((int)auStack_a0);
        if (uVar6 <= uVar5) {
          iVar9 = uVar5 + uVar8 * 4 + 4;
          piVar3 = (int *)(**(code **)(*param_3 + 8))(param_3,iVar9);
          piVar7 = (int *)func_0010EE40();
          iVar4 = func_001022F4();
          bVar10 = piVar3 <= piVar7;
          bVar1 = piVar7 == piVar3;
          if (!bVar10 || bVar1) {
            uVar8 = (int)piVar3 + iVar9;
            bVar10 = (uint)(iVar4 + (int)piVar7) <= uVar8;
            bVar1 = uVar8 == iVar4 + (int)piVar7;
          }
          if (!bVar10 || bVar1) {
            objStack_b0[0] = 0;
            objStack_b0[1] = param_4;
            uVar8 = func_0041252C((int)param_1,uVar2,(int)piVar3,uVar5,0,param_4);
            if (uVar8 == uVar5) {
              *(undefined4 *)((int)piVar3 + uVar5) = *DAT_004117d0;
              func_004134E4(aiStack_38,piVar3,1);
              func_00413470((int)aiStack_38);
              (**(code **)(*param_1 + 8))(param_1,uVar2,piVar3);
              return piVar3;
            }
          }
        }
      }
      piVar3 = (int *)0x0;
    }
  }
  return piVar3;
}

