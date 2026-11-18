// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00255C40(int param_1);
extern int func_00255C58(int param_1);
extern int func_00255C84(int param_1);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_00547514(int param_1);
extern int func_00584B94(int param_1,int param_2);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int DAT_001cd414;
extern int *DAT_001cd418;
extern int *DAT_001cd41c;
extern int DAT_001cd430;
extern int *DAT_001cd434;
extern char s_SE_PL_LIVER_GET_001cd420[];

// USA 001CD2E4 <- EU 001CD2E4 (Ghidra, non-matching)
// GLOBAL DAT_001cd414 int
// GLOBAL DAT_001cd418 int *
// GLOBAL DAT_001cd41c int *
// GLOBAL DAT_001cd430 int
// GLOBAL DAT_001cd434 int *
// GLOBAL s_SE_PL_LIVER_GET_001cd420 string

undefined4 func_001CD2E4(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  if ((*(char *)(param_1 + 0x4f8) != '\x02') && (*(char *)(param_1 + 0x4d8) != '\x06')) {
    bVar2 = func_00584B94(*DAT_001cd418,
                          (uint)*(ushort *)(DAT_001cd414 + (uint)*(byte *)(param_1 + 0x4f9) * 2));
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x4f9);
      if (cVar1 == '\0') {
        iVar3 = func_00255C40(*DAT_001cd41c);
        if (iVar3 == 0) {
          return 0;
        }
      }
      else if (cVar1 == '\x01') {
        iVar3 = func_00255C58(*DAT_001cd41c);
        if (iVar3 == 0) {
          return 0;
        }
      }
      else if ((cVar1 == '\x02') && (iVar3 = func_00255C84(*DAT_001cd41c), iVar3 == 0)) {
        return 0;
      }
      local_14 = s_SE_PL_LIVER_GET_001cd420;
      local_18 = DAT_001cd430;
      func_004EA104(*DAT_001cd434,&local_18,0);
      if (*(short *)(param_1 + 0x36) == 0) {
        func_00547514(param_1 + 4);
      }
      else {
        func_00588C14(param_1,0,1);
      }
      *(undefined1 *)(param_1 + 0x2d7) = 1;
      return 1;
    }
    *(undefined1 *)(param_1 + 0x50c) = 1;
  }
  return 0;
}

