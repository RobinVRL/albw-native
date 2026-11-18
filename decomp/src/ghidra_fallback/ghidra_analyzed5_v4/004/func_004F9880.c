#include "ghidra_types.h"

extern int func_0014DBF4(int *param_1,int *param_2,undefined4 param_3,int param_4);
extern int DAT_004f993c;
extern undefined4 DAT_004f9940;
extern undefined4 DAT_004f9944;
extern undefined4 DAT_004f9948;
extern undefined4 DAT_004f994c;
extern undefined4 DAT_004f9950;

// USA 004F9880 <- EU 004F9858 (Ghidra, non-matching)
// GLOBAL DAT_004f993c int
// GLOBAL DAT_004f9940 undefined4
// GLOBAL DAT_004f9944 undefined4
// GLOBAL DAT_004f9948 undefined4
// GLOBAL DAT_004f994c undefined4
// GLOBAL DAT_004f9950 undefined4

int func_004F9880(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define iStack_10 (*(int *)(albw_frame + 0x0))
  #define uStack_c (*(undefined4 *)(albw_frame + 0x4))
  iVar1 = DAT_004f993c;
  if (param_4 == 0) {
    if (param_1 == 5) {
      iStack_10 = DAT_004f993c;
      uStack_c = DAT_004f9950;
      uVar2 = func_0014DBF4(param_2,&iStack_10,param_3,0);
      return uVar2;
    }
    if (param_1 == 8) {
      iStack_10 = DAT_004f993c;
      uStack_c = DAT_004f994c;
      uVar2 = func_0014DBF4(param_2,&iStack_10,param_3,0);
      return uVar2;
    }
    if (param_1 == 0xe) {
      iStack_10 = DAT_004f993c;
      uStack_c = DAT_004f9948;
      uVar2 = func_0014DBF4(param_2,&iStack_10,param_3,0);
      return uVar2;
    }
  }
  else {
    if (param_1 == 9) {
      iStack_10 = DAT_004f993c;
      uStack_c = DAT_004f9944;
      uVar2 = func_0014DBF4(param_2,&iStack_10,param_3,0);
      return uVar2;
    }
    if (param_1 == 10) {
      iStack_10 = DAT_004f993c;
      uStack_c = DAT_004f9940;
      iVar1 = func_0014DBF4(param_2,&iStack_10,param_3,0);
    }
  }
  return iVar1;
}

