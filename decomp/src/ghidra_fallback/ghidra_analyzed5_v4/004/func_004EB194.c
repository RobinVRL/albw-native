#include "ghidra_types.h"

extern int func_0025BDA4(int *param_1,int *param_2);
extern int func_00296170(int param_1);
extern int func_005471B4(int param_1,int *param_2);
extern int *DAT_004eb1e0;
extern int DAT_004eb208;
extern char s_SE_ENV_ENEMY_ATTACK_AUDIENCE_004eb20c[];
extern char s_SE_ENV_ENEMY_ATTACK_AUDIENCE_LAS_004eb1e4[];

// USA 004EB194 <- EU 004EB16C (Ghidra, non-matching)
// GLOBAL DAT_004eb1e0 int *
// GLOBAL DAT_004eb208 int
// GLOBAL s_SE_ENV_ENEMY_ATTACK_AUDIENCE_004eb20c string
// GLOBAL s_SE_ENV_ENEMY_ATTACK_AUDIENCE_LAS_004eb1e4 string

void func_004EB194(int param_1)

{
  char cVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  func_00296170(*(int *)(param_1 + 0x4c));
  local_18 = DAT_004eb208;
  cVar1 = *(char *)(*DAT_004eb1e0 + 0x18);
  if ((cVar1 == '\x18' || cVar1 == '\x19') || cVar1 == '\x1a') {
    local_1c = s_SE_ENV_ENEMY_ATTACK_AUDIENCE_LAS_004eb1e4;
    local_20 = DAT_004eb208;
    iVar2 = func_005471B4(*(int *)(param_1 + 0x3c),&local_20);
    if (iVar2 != 1) {
      local_14 = s_SE_ENV_ENEMY_ATTACK_AUDIENCE_004eb20c;
      func_0025BDA4(*(int **)(param_1 + 0x40),&local_18);
    }
  }
  return;
}

