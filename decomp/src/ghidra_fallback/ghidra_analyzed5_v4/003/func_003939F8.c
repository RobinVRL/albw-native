#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00120FBC(int param_1,undefined4 *param_2,float *param_3,undefined4 *param_4,undefined4 param_5, int param_6,float *param_7);
extern int func_0014A354(int param_1,int param_2);
extern int func_0014AA1C(int param_1,char *param_2,int param_3);
extern int func_001E6E60(int param_1);
extern int func_00230610(int param_1,undefined4 param_2);
extern int func_003C2154(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_003C2160(int param_1);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int func_00588BF0(int param_1,int param_2);
extern int *DAT_00393b90;
extern undefined4 *DAT_00393b94;
extern float DAT_00393b98;
extern undefined4 DAT_00393b9c;
extern int *DAT_00393ba0;
extern int *DAT_00393ba4;
extern uint *DAT_00393ba8;
extern undefined4 *DAT_00393bac;
extern undefined4 DAT_00393bb0;
extern uint DAT_00393bb4;
extern int *DAT_00393bb8;

// USA 003939F8 <- EU 003939D4 (Ghidra, non-matching)
// GLOBAL DAT_00393b90 int *
// GLOBAL DAT_00393b94 undefined4 *
// GLOBAL DAT_00393b98 float
// GLOBAL DAT_00393b9c undefined4
// GLOBAL DAT_00393ba0 int *
// GLOBAL DAT_00393ba4 int *
// GLOBAL DAT_00393ba8 uint *
// GLOBAL DAT_00393bac undefined4 *
// GLOBAL DAT_00393bb0 undefined4
// GLOBAL DAT_00393bb4 uint
// GLOBAL DAT_00393bb8 int *

/* WARNING: Variable defined which should be unmapped: objStack_58 */

void func_003939F8(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define objStack_58 ((uint *)(albw_frame + 0x8))
  #define local_4c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x30))
  #define local_2c (*(undefined4 *)(albw_frame + 0x34))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x38))
  #define local_24 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_20 (*(float *)(albw_frame + 0x40))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x44))
  #define local_18 (*(float *)(albw_frame + 0x48))
  bVar1 = func_00588BF0(param_1,0);
  if (bVar1) {
    if (*(char *)(param_1 + 3000) == '\0') {
      if (*(int *)(*DAT_00393b90 + 0x18) != 0) {
        local_4c = *DAT_00393b94;
        uStack_48 = DAT_00393b94[1];
        uStack_44 = DAT_00393b94[2];
        uStack_40 = DAT_00393b94[3];
        uStack_3c = DAT_00393b94[4];
        uStack_38 = DAT_00393b94[5];
        uStack_34 = DAT_00393b94[6];
        uStack_30 = DAT_00393b94[7];
        local_2c = DAT_00393b94[8];
        uStack_28 = DAT_00393b94[9];
        local_24 = DAT_00393b94[10];
        objStack_58[2] = (uint)&local_20;
        local_20 = DAT_00393b98;
        uStack_1c = DAT_00393b9c;
        local_18 = DAT_00393b98;
        objStack_58[0] = 0;
        objStack_58[1] = 0;
        func_00120FBC(*(int *)(*DAT_00393b90 + 0x18),(undefined4 *)(param_1 + 0xb10),
                      (float *)(param_1 + 0xb18),&local_4c,0,0,(float *)objStack_58[2]);
      }
      *(undefined1 *)(param_1 + 3000) = 1;
    }
    func_001E6E60(param_1);
    iVar2 = func_0052FBDC(*DAT_00393ba0 + 0x3dbbc,*(int *)(param_1 + 0xb40),0);
    func_00230610(param_1 + 0x7e0,*(undefined4 *)(iVar2 + 0x2cc));
  }
  if (*(char *)(param_1 + 0xbb9) != '\0') {
    piVar3 = (int *)func_0014A354(*DAT_00393ba4,5);
    if (((*DAT_00393ba8 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_00393ba8), iVar2 != 0)) {
      *DAT_00393bac = DAT_00393bb0;
    }
    if ((piVar3 == (int *)0x0) ||
       (iVar2 = (**(code **)(*piVar3 + 8))(piVar3,DAT_00393bac), iVar2 == 0)) {
      piVar3 = (int *)0x0;
    }
    if (piVar3 != (int *)0x0) {
      func_003C2154((int)piVar3,0xf0,1,1);
      objStack_58[0] = CONCAT31((*(undefined4 *)((char *)&objStack_58[0] + 1) & 0xFFFFFF),2);
      objStack_58[1] = DAT_00393bb4;
      func_0014AA1C(*DAT_00393bb8,(char *)objStack_58,0);
      *(undefined1 *)(param_1 + 0xbb9) = 0;
      func_003C2160((int)piVar3);
    }
  }
  return;
}

