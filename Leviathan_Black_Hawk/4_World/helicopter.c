class Leviathan_Black_Hawk extends HeliSIB_black_hawk_base
{
	override void creat_InInventory_heli()
	{
		if(IsKindOf("Leviathan_Black_Hawk"))
		{
			GetInventory().CreateInInventory( "SIBblack_hawk_Door_1_1_camo2" );
			GetInventory().CreateInInventory( "SIBblack_hawk_Door_1_2_camo2" );
			GetInventory().CreateInInventory( "SIBblack_hawk_Door_2_1_camo2" );
			GetInventory().CreateInInventory( "SIBblack_hawk_Door_2_2_camo2" );
			GetInventory().CreateInInventory( "SIBblack_hawk_blade1" );
			GetInventory().CreateInInventory( "SIBblack_hawk_blade2" );
			GetInventory().CreateInInventory( "SIBblack_hawk_blade3" );
			GetInventory().CreateInInventory( "SIBblack_hawk_blade4" );
			GetInventory().CreateInInventory( "SIBblack_hawk_bladem1" );
			GetInventory().CreateInInventory( "SIBblack_hawk_bladem2" );
			GetInventory().CreateInInventory( "SIBblack_hawk_bladem3" );
			GetInventory().CreateInInventory( "SIBblack_hawk_bladem4" );
			GetInventory().CreateInInventory( "CarBattery" );
			GetInventory().CreateInInventory( "HeadlightH7" );
			GetInventory().CreateInInventory( "HeadlightH7" );
			return;
		}
		super.creat_InInventory_heli();
	};
};