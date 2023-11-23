void main()
{
	//INIT ECONOMY--------------------------------------
	Hive ce = CreateHive();
	if ( ce )
		ce.InitOffline();

	//DATE RESET AFTER ECONOMY INIT-------------------------
	int year, month, day, hour, minute;
	int reset_month = 9, reset_day = 20;
	GetGame().GetWorld().GetDate(year, month, day, hour, minute);

	if ((month == reset_month) && (day < reset_day))
	{
		GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
	}
	else
	{
		if ((month == reset_month + 1) && (day > reset_day))
		{
			GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
		}
		else
		{
			if ((month < reset_month) || (month > reset_month + 1))
			{
				GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
			}
		}
	}
}

class CustomMission: MissionServer
{
	void SetRandomHealth(EntityAI itemEnt)
	{
		if ( itemEnt )
		{
			float rndHlt = Math.RandomFloat( 1.0, 1.0 );
			itemEnt.SetHealth01( "", "", rndHlt );
		}
	}

	override PlayerBase CreateCharacter(PlayerIdentity identity, vector pos, ParamsReadContext ctx, string characterName)
	{
		Entity playerEnt;
		playerEnt = GetGame().CreatePlayer( identity, characterName, pos, 0, "NONE" );
		Class.CastTo( m_player, playerEnt );

		GetGame().SelectPlayer( identity, m_player );

		return m_player;
	}

	override void StartingEquipSetup(PlayerBase player, bool clothesChosen)
	{
		EntityAI itemClothing;
		EntityAI itemEnt;
		ItemBase itemBs;
		float rand;

		itemClothing = player.FindAttachmentBySlotName( "Body" );
		if ( itemClothing )
		{
			SetRandomHealth( itemClothing );
			
			itemEnt = itemClothing.GetInventory().CreateInInventory( "BandageDressing" );
			if ( Class.CastTo( itemBs, itemEnt ) )
				itemBs.SetQuantity( 2 );
			player.SetQuickBarEntityShortcut(itemEnt, 2);
			
			string chemlightArray[] = { "Chemlight_White", "Chemlight_Yellow", "Chemlight_Green", "Chemlight_Red" };
			int rndIndex = Math.RandomInt( 0, 4 );
			itemEnt = itemClothing.GetInventory().CreateInInventory( chemlightArray[rndIndex] );
			SetRandomHealth( itemEnt );
			player.SetQuickBarEntityShortcut(itemEnt, 1);

			rand = Math.RandomFloatInclusive( 0.0, 1.0 );
			if ( rand < 0.35 )
				itemEnt = player.GetInventory().CreateInInventory( "Apple" );
			else if ( rand > 0.65 )
				itemEnt = player.GetInventory().CreateInInventory( "Pear" );
			else
				itemEnt = player.GetInventory().CreateInInventory( "Plum" );
			player.SetQuickBarEntityShortcut(itemEnt, 3);
			SetRandomHealth( itemEnt );
			

			player.RemoveAllItems();
			

				itemEnt = player.GetInventory().CreateInInventory("SVD");
			SetRandomHealth( itemEnt );

				itemEnt = player.GetInventory().CreateInInventory("GhillieAtt_Woodland");
			SetRandomHealth( itemEnt );

				itemEnt = player.GetInventory().CreateInInventory("Mag_SVD_10Rnd");
			SetRandomHealth( itemEnt );

				itemEnt = player.GetInventory().CreateInInventory("AK_Suppressor");
			SetRandomHealth( itemEnt );
			
				itemEnt = player.GetInventory().CreateInInventory("KazuarOptic");
			SetRandomHealth( itemEnt );

				itemEnt = player.GetInventory().CreateInInventory("ACOGOptic_6x");
			SetRandomHealth( itemEnt );
			
				itemEnt = player.GetInventory().CreateInInventory("Battery9V");
			SetRandomHealth( itemEnt );

				itemEnt = player.GetInventory().CreateInInventory("Battery9V");
			SetRandomHealth( itemEnt );

				itemEnt = player.GetInventory().CreateInInventory("M4A1_Green");
			SetRandomHealth( itemEnt );

				itemEnt = player.GetInventory().CreateInInventory("Mag_STANAG_60Rnd");
			SetRandomHealth( itemEnt );
				
				itemEnt = player.GetInventory().CreateInInventory("M4_Suppressor");
			SetRandomHealth( itemEnt );

				itemEnt = player.GetInventory().CreateInInventory("M4_CQBBttstck");
			SetRandomHealth( itemEnt );

				itemEnt = player.GetInventory().CreateInInventory("M4_T3NRDSOptic");
			SetRandomHealth( itemEnt );

				itemEnt = player.GetInventory().CreateInInventory("Battery9V");
			SetRandomHealth( itemEnt );

				itemEnt = player.GetInventory().CreateInInventory("NVGHeadstrap");
			SetRandomHealth( itemEnt );

				itemEnt = player.GetInventory().CreateInInventory("NVGoggles");
			SetRandomHealth( itemEnt );
	
				itemEnt = player.GetInventory().CreateInInventory("Battery9V");
			SetRandomHealth( itemEnt );

				itemEnt = player.GetInventory().CreateInInventory("USMCJacket_Woodland");
			SetRandomHealth( itemEnt );

				itemEnt = player.GetInventory().CreateInInventory("KukriKnife");
			SetRandomHealth( itemEnt );
				
				itemEnt = player.GetInventory().CreateInInventory("GhillieSuit_Woodland");
			SetRandomHealth( itemEnt );
			
				itemEnt = player.GetInventory().CreateInInventory("GhillieHood_Woodland");
			SetRandomHealth( itemEnt );

				itemEnt = player.GetInventory().CreateInInventory("GhillieAtt_Woodland");
			SetRandomHealth( itemEnt );

				itemEnt = player.GetInventory().CreateInInventory("USMCPants_Woodland");
			SetRandomHealth( itemEnt );

				itemEnt = player.GetInventory().CreateInInventory("BakedBeansCan");
			SetRandomHealth( itemEnt );
				
				itemEnt = player.GetInventory().CreateInInventory("BakedBeansCan");
			SetRandomHealth( itemEnt );
				
				itemEnt = player.GetInventory().CreateInInventory("BakedBeansCan");
			SetRandomHealth( itemEnt );
				
				itemEnt = player.GetInventory().CreateInInventory("WaterBottle");
			SetRandomHealth( itemEnt );

				itemEnt = player.GetInventory().CreateInInventory("Mag_STANAG_60Rnd");
			SetRandomHealth( itemEnt );

				itemEnt = player.GetInventory().CreateInInventory("Mag_STANAG_60Rnd");
			SetRandomHealth( itemEnt );	

				itemEnt = player.GetInventory().CreateInInventory("Mag_STANAG_60Rnd");
			SetRandomHealth( itemEnt );

				itemEnt = player.GetInventory().CreateInInventory("Mag_SVD_10Rnd");
			SetRandomHealth( itemEnt );

				itemEnt = player.GetInventory().CreateInInventory("Mag_SVD_10Rnd");
			SetRandomHealth( itemEnt );

				itemEnt = player.GetInventory().CreateInInventory("TacticalGloves_Green");
			SetRandomHealth( itemEnt );

				itemEnt = player.GetInventory().CreateInInventory("JungleBoots_Olive");
			SetRandomHealth( itemEnt );
	
				
		}
		
		itemClothing = player.FindAttachmentBySlotName( "Legs" );
		if ( itemClothing )
			SetRandomHealth( itemClothing );
		
		itemClothing = player.FindAttachmentBySlotName( "Feet" );
	}
};

Mission CreateCustomMission(string path)
{
	return new CustomMission();
}
