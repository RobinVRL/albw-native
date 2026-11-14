/* USA 0057DE78: Ghidra text with one fix: the FileDevice::isExistFile call (00489CE0) lost its
 * 3rd argument (the path SafeString, still in r2 on ARM; the EU code moves it there right
 * before the call). Rest unchanged. Confidence: high. */
#include "ghidra_types.h"

extern int func_00489CE0();
extern int func_0057D224(int *param_1);

// USA 0057DE78 <- EU 0057DE50 (Ghidra, non-matching)

int * func_0057DE78(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(uint *)(albw_frame + 0x0))
  puVar2 = *(undefined4 **)(param_1 + 0x58);
  local_20 = param_4;
  do {
    if (puVar2 == (undefined4 *)(*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x50) * 4)) {
      return (int *)0x0;
    }
    piVar3 = (int *)*puVar2;
    iVar1 = func_0057D224(piVar3);
    if (iVar1 != 0) {
      local_20 = local_20 & 0xffffff00;
      func_00489CE0(piVar3,(int)&local_20,param_2);  /* r2 = r7 = path */
      if ((char)local_20 != '\0') {
        return piVar3;
      }
    }
    puVar2 = puVar2 + 1;
  } while( true );
}

