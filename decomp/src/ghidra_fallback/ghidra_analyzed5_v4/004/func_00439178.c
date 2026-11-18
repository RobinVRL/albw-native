#include "ghidra_types.h"

extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int *DAT_0043922c;
extern int DAT_00439230;
extern char s_SE_S_WARP_PINT_SELECT_00439250[];
extern char s_SE_S_WARP_PINT_SELECT_DARK_00439234[];

// USA 00439178 <- EU 00439158 (Ghidra, non-matching)
// GLOBAL DAT_0043922c int *
// GLOBAL DAT_00439230 int
// GLOBAL s_SE_S_WARP_PINT_SELECT_00439250 string
// GLOBAL s_SE_S_WARP_PINT_SELECT_DARK_00439234 string

undefined4 func_00439178(undefined4 param_1,undefined4 param_2)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  switch(*(undefined1 *)(*DAT_0043922c + 0x18)) {
  default:
    local_10 = DAT_00439230;
    local_c = s_SE_S_WARP_PINT_SELECT_00439250;
    return func_00533078(param_2,&local_10,0);
  case 1:
  case 3:
  case 5:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
    local_10 = DAT_00439230;
    local_c = s_SE_S_WARP_PINT_SELECT_DARK_00439234;
    return func_00533078(param_2,&local_10,0);
  }
}

