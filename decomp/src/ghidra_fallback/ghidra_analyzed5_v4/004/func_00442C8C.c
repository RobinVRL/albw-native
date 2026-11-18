#include "ghidra_types.h"

extern int func_0012C85C(int *param_1,uint param_2);
extern int func_00518FA4(int param_1);
extern int func_0051C54C(int param_1);
extern int func_0051E300(int param_1);
extern int func_005740D8(void);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int *DAT_00442d7c;
extern int *DAT_00442d80;
extern int *DAT_00442d84;
extern int DAT_00442d88;
extern char s_SE_S_PAUSE_IN_00442d8c[];
extern char s_SE_S_PAUSE_OUT_00442d9c[];

// USA 00442C8C <- EU 00442C6C (Ghidra, non-matching)
// GLOBAL DAT_00442d7c int *
// GLOBAL DAT_00442d80 int *
// GLOBAL DAT_00442d84 int *
// GLOBAL DAT_00442d88 int
// GLOBAL s_SE_S_PAUSE_IN_00442d8c string
// GLOBAL s_SE_S_PAUSE_OUT_00442d9c string

undefined4 func_00442C8C(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  if (((*(uint *)(*DAT_00442d7c + 0x4d0) & 0x800) != 0) &&
     (iVar3 = func_005740D8(), iVar4 = DAT_00442d88, piVar2 = DAT_00442d84, piVar5 = DAT_00442d80,
     iVar3 != 0)) {
    if (*(char *)((int)param_1 + 0xd) == '\0') {
      if (*(char *)((int)param_1 + 0xe) != '\0') goto LAB_00442d1c;
      func_00518FA4(*DAT_00442d80);
      local_1c = s_SE_S_PAUSE_IN_00442d8c;
      local_20 = iVar4;
      func_00587F74(*piVar2,&local_20,0);
    }
    cVar1 = *(char *)((int)param_1 + 0xd);
    bVar6 = cVar1 == '\x03';
    if (bVar6) {
      cVar1 = *(char *)((int)param_1 + 0xe);
    }
    if (bVar6 && cVar1 == '\x03') {
      func_0051C54C(*piVar5);
      local_1c = s_SE_S_PAUSE_OUT_00442d9c;
      local_20 = iVar4;
      func_00587F74(*piVar2,&local_20,0);
    }
  }
LAB_00442d1c:
  iVar4 = param_1[0x13];
  iVar3 = param_1[0x15];
  while( true ) {
    piVar5 = (int *)(iVar4 - iVar3);
    if (piVar5 == (int *)((int)param_1 + (0x48 - param_1[0x15]))) break;
    iVar4 = func_0051E300((int)piVar5);
    if (iVar4 != 0) {
      (**(code **)(*piVar5 + 0xc))(piVar5);
    }
    iVar4 = *(int *)((int)piVar5 + iVar3 + 4);
  }
  return func_0012C85C(param_1,param_1[0x15]);
}

