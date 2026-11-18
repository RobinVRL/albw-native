#include "ghidra_types.h"

extern int func_00297298(int param_1,int param_2);
extern int func_004EC4FC(int param_1,int param_2,int param_3);
extern int func_0051B888(int param_1,int param_2);
extern int func_00540A70(int param_1,int *param_2);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int *DAT_001721c8;
extern int *DAT_001721cc;
extern int DAT_001721d0;
extern int DAT_001721f0;
extern char s_SE_S_FINISH_001721d4[];
extern char s_SE_S_TIME_UP_001721e0[];

// USA 001720D0 <- EU 001720D0 (Ghidra, non-matching)
// GLOBAL DAT_001721c8 int *
// GLOBAL DAT_001721cc int *
// GLOBAL DAT_001721d0 int
// GLOBAL DAT_001721f0 int
// GLOBAL s_SE_S_FINISH_001721d4 string
// GLOBAL s_SE_S_TIME_UP_001721e0 string

void func_001720D0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar2 = DAT_001721d0;
  piVar1 = DAT_001721cc;
  iVar3 = *DAT_001721c8;
  if (param_2 == 0) {
    if (*(uint *)(param_1 + 0x2f0) < *(uint *)(param_1 + 0x2c8)) {
      *(undefined1 *)(param_1 + 0x2ee) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x2ee) = 0;
    }
    func_0051B888(iVar3,2);
    local_14 = s_SE_S_FINISH_001721d4;
    local_18 = iVar2;
    func_00587F74(*piVar1,&local_18,0);
  }
  else if (param_2 == 1) {
    *(undefined1 *)(param_1 + 0x2ee) = 2;
    func_0051B888(iVar3,1);
    local_14 = s_SE_S_TIME_UP_001721e0;
    local_18 = iVar2;
    func_00587F74(*piVar1,&local_18,0);
  }
  local_1c = *(undefined4 *)(DAT_001721f0 + 8);
  local_20 = iVar2;
  iVar2 = func_00540A70(*piVar1,&local_20);
  if (iVar2 != 0) {
    func_00297298(*piVar1,0xf);
    func_004EC4FC(*piVar1,0x1e,1);
  }
  return;
}

