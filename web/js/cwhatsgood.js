
(function() {
	var data = [
		"appName",
		"appCodeName",
		"appVersion",
		"language",
		"platform",
		"product",
		"userAgent"
	];

	for (var i = 0; i < data.length; i++) {
		data[i] += "=" + navigator[data[i]];
	}
	data.push("page=" + location.pathname);

	var x = new XMLHttpRequest();
	x.open("POST", "/analytics/", true);
	x.send(data.join("&"));
})();

window.addEventListener("load", function() {
	$(function() {
		$(document).ajaxStop(function() {
			$(this).unbind("ajaxStop");
			$(document).foundation();
		});
		$("nav").load("/res/nav.html");
		$("#cref-side-nav").load("/res/cref-side-nav.html");
		$("#tut-side-nav").load("/res/tut-side-nav.html");
		$("footer").load("/res/footer.html");
	});
});

