#include "ghidra_types.h"

extern int func_004115AC(int *param_1,uint param_2,uint param_3,int *param_4,uint param_5,uint param_6);
extern int func_00412404(int *param_1,uint param_2,int *param_3,int param_4,int param_5);
extern int func_0041297C(int *param_1,int *param_2);
extern int func_00569BBC(int param_1,uint param_2,undefined4 *param_3);
extern int func_0056C5EC(int param_1,uint *param_2,uint param_3,uint param_4);
extern int func_0056CBF8(int param_1,uint param_2);
extern int func_0056D220(int param_1,uint param_2);

// USA 00410FB8 <- EU 00410F98 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// PARAM param_6 Stack[0x4]:4 uint

/* WARNING: Variable defined which should be unmapped: objStack_48 */

undefined4
func_00410FB8(int *param_1,uint param_2,int *param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_48 ((uint *)(albw_frame + 0x8))
  #define aiStack_30 ((int *)(albw_frame + 0x20))
  uVar1 = func_0056CBF8(param_1[1],param_2);
  if ((param_4 & 2) != 0) {
    objStack_48[0] = 0;
    uVar2 = func_00412404(param_1,uVar1,param_3,param_5,0);
    if (uVar2 == 0) {
      return 0;
    }
  }
  if ((param_4 & 8) != 0) {
    piVar3 = (int *)(**(code **)(*param_1 + 0x10))(param_1,uVar1);
    if (piVar3 == (int *)0x0) {
      if (param_6 == 0xffffffff) {
        param_6 = param_2;
      }
      puVar5 = (uint *)func_0056D220(param_1[1],param_6);
      uVar1 = 0;
      if (*puVar5 != 0) {
        do {
          if ((param_4 & 8) != 0) {
            uVar2 = func_0056CBF8(param_1[1],puVar5[uVar1 + 1]);
            objStack_48[0] = 1;
            uVar2 = func_00412404(param_1,uVar2,param_3,param_5,1);
            if (uVar2 == 0) {
              return 0;
            }
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 < *puVar5);
      }
    }
    else {
      (*(undefined1 *)((char *)&objStack_48[2] + 0)) = 0;
      objStack_48[1] = 0;
      (*(undefined1 *)((char *)&objStack_48[2] + 1)) = 0;
      iVar4 = func_00569BBC(param_1[1],param_2,objStack_48);
      uVar1 = objStack_48[0];
      if (iVar4 == 0) {
        return 0;
      }
      func_0041297C(aiStack_30,piVar3);
      (*(undefined1 *)((char *)&objStack_48[2] + 0)) = 0;
      (*(undefined1 *)((char *)&objStack_48[2] + 1)) = 0;
      (*(undefined1 *)((char *)&objStack_48[2] + 2)) = 0;
      (*(undefined1 *)((char *)&objStack_48[2] + 3)) = 0;
      (*(undefined1 *)((char *)&objStack_48[3] + 0)) = 0;
      iVar4 = func_0056C5EC((int)aiStack_30,objStack_48,uVar1,0);
      uVar2 = objStack_48[1];
      uVar1 = objStack_48[0];
      if (iVar4 == 0) {
        return 0;
      }
      objStack_48[1] = param_5;
      objStack_48[0] = param_4;
      iVar4 = func_004115AC(param_1,uVar1,uVar2,param_3,param_4,param_5);
      if (iVar4 == 0) {
        return 0;
      }
    }
  }
  return 1;
}

