
$(document).ready(function(){
  $(".wynik").text("Nowa treść");
	console.log(($("p").text()));
  $("#przycisk").click(function(){
    var vnk = parseInt($("#vnk").val());
    var nk = parseInt($("#nk").val());
    var R = vnk / nk * 100;
    var div2 = '<div class="wspolczynnik">'+R+'</div>';
    $("div.wynik").after(div2);
  });
  $("input").mouseover(function(){
    $(this).addClass("tloBlue");
  });
  $("input").mouseleave(function(){
    $(this).removeClass("tlowhite");

  $("pig1").mouseover(function(){
    $().hide(200);

  });
});
});
