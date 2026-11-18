#include "ghidra_types.h"

extern int func_0025716C(int param_1,undefined4 param_2);
extern int func_00257528(int param_1,int param_2);
extern int func_004090A0(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4);
extern int func_0040D80C(int param_1);
extern int func_0057D86C(int *param_1);

// USA 00258CF4 <- EU 00258D1C (Ghidra, non-matching)

int func_00258CF4(int param_1,int *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(undefined4 *)(albw_frame + 0x0))
  #define local_5c (*(undefined1 *)(albw_frame + 0x4))
  #define local_58 (*(undefined4 *)(albw_frame + 0x8))
  #define local_48 (*(undefined4 *)(albw_frame + 0x18))
  #define local_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 *)(albw_frame + 0x24))
  #define local_38 (*(undefined4 *)(albw_frame + 0x28))
  #define local_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x30))
  #define local_2c (*(undefined4 *)(albw_frame + 0x34))
  #define local_28 (*(undefined4 *)(albw_frame + 0x38))
  #define local_24 (*(undefined1 *)(albw_frame + 0x3c))
  #define local_23 (*(undefined1 *)(albw_frame + 0x3d))
  #define local_1c (*(undefined4 *)(albw_frame + 0x44))
  if (param_3 == -1) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (*(char *)(param_1 + 100) != '\0') {
    bVar1 = func_0057D86C((int *)(param_1 + 0xc));
    if (bVar1) {
      return 0;
    }
    *(undefined1 *)(param_1 + 100) = 0;
  }
  bVar1 = func_0057D86C((int *)(param_1 + 0xc));
  if (bVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 0xac);
    }
    if (iVar3 == param_3) {
      bVar1 = func_0057D86C((int *)(param_1 + 0xc));
      if (!bVar1) {
        return 0;
      }
      if (*(int *)(param_1 + 0xc) != 0) {
        func_0040D80C(*(int *)(param_1 + 0xc));
      }
      if (*(int *)(param_1 + 0xc) == 0) {
        iVar3 = -1;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 0xac);
      }
      func_00257528(param_1,iVar3);
      return (int)*(char *)(param_1 + 100);
    }
  }
  if (*(int *)(param_1 + 0x48) < 1) {
    cVar2 = func_004090A0(param_2,(int *)(param_1 + 0xc),param_3,0);
    *(char *)(param_1 + 0x10) = cVar2;
  }
  else {
    local_48 = 0;
    local_40 = 0xffffffff;
    local_44 = 0;
    local_3c = 0xffffffff;
    local_38 = 0xffffffff;
    local_34 = 0xffffffff;
    uStack_30 = 0;
    local_24 = 0;
    local_23 = 0xff;
    local_2c = 0;
    local_28 = 0;
    local_60 = 1;
    local_1c = 0;
    local_5c = 2;
    local_58 = *(undefined4 *)(param_1 + 0x48);
    cVar2 = func_004090A0(param_2,(int *)(param_1 + 0xc),param_3,&local_60);
    *(char *)(param_1 + 0x10) = cVar2;
  }
  if (cVar2 == '\0') {
    func_0025716C(param_1,param_3);
    func_00257528(param_1,param_3);
  }
  return (int)*(char *)(param_1 + 100);
}

