#include "ghidra_types.h"

extern int func_0012CA04(int param_1);
extern int func_00532C78(int param_1);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00656CA4(undefined4 *param_1,undefined1 param_2);
extern int DAT_00482334;
extern char s_SE_S_SELECT_00482328[];

// USA 00482218 <- EU 004821F0 (Ghidra, non-matching)
// GLOBAL DAT_00482334 int
// GLOBAL s_SE_S_SELECT_00482328 string

void func_00482218(int param_1)

{
  char cVar1;
  bool bVar2;
  ushort *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  *(undefined1 *)(param_1 + 0xa9) = 0;
  *(undefined1 *)(param_1 + 0xaa) = 0;
  if ((((*(ushort *)(*(int *)(param_1 + 0x14) + 0x16) & 8) != 0) &&
      (*(int *)(*(int *)(param_1 + 0x14) + 8) == 0)) && (*(char *)(param_1 + 0x6c) == '\0')) {
    local_14 = s_SE_S_SELECT_00482328;
    local_18 = DAT_00482334;
    func_00533078(param_1,&local_18,0);
  }
  if ((*(char *)(param_1 + 0x6c) == '\x02') && (bVar2 = func_00532C78(param_1 + 0x5c), !bVar2)) {
    *(undefined1 *)(param_1 + 0xa8) = 0;
    *(undefined1 *)(param_1 + 0xaa) = 1;
    puVar3 = (ushort *)(*(int *)(param_1 + 0x14) + 0x16);
    *puVar3 = *puVar3 & 0xfffd;
    func_00656CA4((undefined4 *)(param_1 + 0x68),0);
    puVar3 = (ushort *)(*(int *)(param_1 + 0x14) + 0x16);
    *puVar3 = *puVar3 | 0x40;
    return;
  }
  func_0012CA04(param_1);
  cVar1 = *(char *)(param_1 + 0x8c);
  bVar2 = cVar1 == '\0';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x6c);
  }
  if (bVar2 && cVar1 == '\x02') {
    *(undefined1 *)(param_1 + 0x8c) = 1;
    *(undefined1 *)(param_1 + 0xa9) = 1;
    puVar3 = (ushort *)(*(int *)(param_1 + 0x14) + 0x16);
    *puVar3 = *puVar3 & 0xffbf;
  }
  if (((*(char *)(param_1 + 0xa8) != '\0') && (*(char *)(param_1 + 0x6c) == '\0')) &&
     (bVar2 = func_00532C78(param_1 + 0x50), !bVar2)) {
    func_00656CA4((undefined4 *)(param_1 + 0x68),2);
  }
  return;
}

