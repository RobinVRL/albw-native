// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00255B48(int param_1,int param_2,int param_3);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00547514(int param_1);
extern int func_00556E64(int param_1);
extern int func_00588BE4(int param_1);
extern int *DAT_002403a0;
extern int *DAT_002403a4;
extern int *DAT_002403a8;
extern int DAT_002403bc;
extern int *DAT_002403c0;
extern char s_SE_PL_RUPEE_GET_002403ac[];

// USA 002402C4 <- EU 002402C4 (Ghidra, non-matching)
// GLOBAL DAT_002403a0 int *
// GLOBAL DAT_002403a4 int *
// GLOBAL DAT_002403a8 int *
// GLOBAL DAT_002403bc int
// GLOBAL DAT_002403c0 int *
// GLOBAL s_SE_PL_RUPEE_GET_002403ac string

undefined4 func_002402C4(int param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined4 in_r2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  if ((((*(int *)(param_2 + 0x2c) != 0) && (*(char *)(*(int *)(param_2 + 0x2c) + 1) == '\x11')) &&
      (iVar3 = func_0052FBA0(*DAT_002403a0 + 0x3dbbc,*(uint *)(param_2 + 0x28)), iVar3 != 0)) &&
     ((iVar3 = func_00588BE4(iVar3), piVar1 = DAT_002403a8, iVar3 == *DAT_002403a4 &&
      (bVar2 = func_00556E64(*DAT_002403a8), bVar2)))) {
    iVar3 = 1;
    if (*(char *)(param_1 + 0x4ac) != '\0') {
      if (*(char *)(param_1 + 0x4ac) == '\x01') {
        iVar3 = 5;
      }
      else {
        iVar3 = 0x14;
      }
    }
    func_00255B48(*piVar1,iVar3,in_r2);
    local_14 = s_SE_PL_RUPEE_GET_002403ac;
    local_18 = DAT_002403bc;
    func_004EA104(*DAT_002403c0,&local_18,0);
    func_00547514(param_1 + 4);
    *(undefined1 *)(param_1 + 0x2d7) = 1;
    return 1;
  }
  return 0;
}

