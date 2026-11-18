#include "ghidra_types.h"

extern int func_003DC2E4(void);
extern int func_003DC364(int param_1,int param_2,int param_3);
extern int func_003DD9A8(int param_1,int param_2,ushort *param_3);

// USA 003DB804 <- EU 003DB7E4 (Ghidra, non-matching)

int func_003DB804(int param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((ushort *)(albw_frame + 0x0))
  #define local_18 (*(uint *)(albw_frame + 0x8))
  if (((*(char *)(param_1 + 0xc) != '\0') && (*(char *)(param_1 + 0xd) == -1)) && (param_2 < 2)) {
    iVar2 = func_003DC2E4();
    bVar1 = func_003DC364(iVar2,0,param_2);
    if (bVar1) {
      local_20[0] = 2;
      local_18 = *(uint *)(param_1 + 4) >> 0x10 | *(uint *)(param_1 + 4) << 0x10;
      iVar2 = func_003DC2E4();
      iVar2 = func_003DD9A8(iVar2,param_2,local_20);
      if (iVar2 != 0) {
        *(char *)(param_1 + 0xd) = (char)param_2;
      }
      return iVar2;
    }
  }
  return 0;
}

