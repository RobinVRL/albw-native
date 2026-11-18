#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_00165E28(int param_1,undefined2 param_2);
extern int func_0065F92C(undefined4 *param_1,undefined1 param_2);
extern int DAT_0024e034;
extern char s_SE_EVENT_VOLCANO_0024e020[];

// USA 0024DF98 <- EU 0024DF98 (Ghidra, non-matching)
// GLOBAL DAT_0024e034 int
// GLOBAL s_SE_EVENT_VOLCANO_0024e020 string

undefined4 func_0024DF98(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  if (*(int *)(param_1 + 0x704) == 0) {
    iVar1 = func_00165E28(*(int *)(param_1 + 0x418),0x3c);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x704) = 0xf0;
      return func_0065F92C((undefined4 *)(param_1 + 0x41c),2);
    }
  }
  else {
    *(int *)(param_1 + 0x704) = *(int *)(param_1 + 0x704) + -1;
    local_c = s_SE_EVENT_VOLCANO_0024e020;
    local_10 = DAT_0024e034;
    func_001507D8(param_1,&local_10,0);
  }
  return 0;
}

