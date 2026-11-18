#include "ghidra_types.h"

extern int func_00231340(short *param_1);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0066E7A0(undefined4 *param_1,char param_2);
extern undefined4 DAT_00476d0c;
extern int DAT_00476d10;

// USA 00476CA0 <- EU 00476C78 (Ghidra, non-matching)
// GLOBAL DAT_00476d0c undefined4
// GLOBAL DAT_00476d10 int

undefined4 func_00476CA0(int param_1,int param_2)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  if (*(char *)(param_1 + 0xd0) == '\x03') {
    func_0066E7A0((undefined4 *)(param_1 + 0xcc),'\0');
    if (param_2 != 0) {
      func_00231340((short *)(param_1 + 0x1b8));
      return func_00231340((short *)(param_1 + 0x1c4));
    }
  }
  else if ((*(char *)(param_1 + 0xd0) == '\x01') && (*(char *)(param_1 + 0xf4) == '\0')) {
    func_0066E7A0((undefined4 *)(param_1 + 0xcc),'\0');
    local_14 = DAT_00476d0c;
    local_18 = DAT_00476d10;
    func_00533078(param_1,&local_18,0);
  }
  return 0;
}

