package;

import openfl.display.Sprite;
import openfl.Lib;
import ru.stablex.ui.UIBuilder;

/**
 * ...
 * @author Anguel Esperanza
 */
class Main extends Sprite 
{

	public function new() 
	{
		super();
	
		var operator:Int = 0;
		var numA:Float = 0;
		var numB:Float = 0;
		var answer:Float = 0;
		
		UIBuilder.init();
		

		
		flash.Lib.current.addChild(UIBuilder.buildFn('NumberLabel.xml')());	
		flash.Lib.current.addChild(UIBuilder.buildFn('NumButtonsRowOne.xml')());
		flash.Lib.current.addChild(UIBuilder.buildFn('NumButtonsRowTwo.xml')());
		flash.Lib.current.addChild(UIBuilder.buildFn('NumButtonsRowThree.xml')());
		flash.Lib.current.addChild(UIBuilder.buildFn('MathSignsOne.xml')());
		flash.Lib.current.addChild(UIBuilder.buildFn('MathSignsTwo.xml')());
		flash.Lib.current.addChild(UIBuilder.buildFn('Credits.xml')());
		//flash.Lib.current.addChild(UIBuilder.buildFn('PowerTextInput.xml')() );
		
	}

}
