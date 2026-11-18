#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00584B94(int param_1,int param_2);
extern int DAT_00302fe4;
extern int *DAT_00302fe8;
extern int DAT_00302fec;
extern int DAT_00302ff0;
extern int DAT_00302ff4;
extern int DAT_00303010;
extern char s_SE_DoorBossGanon_OPEN_00302ff8[];

// USA 00302F6C <- EU 00302F48 (Ghidra, non-matching)
// GLOBAL DAT_00302fe4 int
// GLOBAL DAT_00302fe8 int *
// GLOBAL DAT_00302fec int
// GLOBAL DAT_00302ff0 int
// GLOBAL DAT_00302ff4 int
// GLOBAL DAT_00303010 int
// GLOBAL s_SE_DoorBossGanon_OPEN_00302ff8 string

void func_00302F6C(int *param_1)

{
  int *piVar1;
  bool bVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  piVar1 = DAT_00302fe8;
  bVar2 = func_00584B94(*DAT_00302fe8,DAT_00302fe4);
  if ((((bVar2) && (bVar2 = func_00584B94(*piVar1,DAT_00302fec), bVar2)) &&
      (bVar2 = func_00584B94(*piVar1,DAT_00302ff0), bVar2)) &&
     (bVar2 = func_00584B94(*piVar1,DAT_00302ff4), bVar2)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  *(bool *)(param_1 + 0x13a) = bVar2;
  if (bVar2) {
    local_14 = s_SE_DoorBossGanon_OPEN_00302ff8;
    local_18 = DAT_00303010;
    func_00150A84(param_1,&local_18,0);
  }
  return;
}

