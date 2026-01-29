let isSubscribed = true; // keep true for presentation

function openChat(name) {
  if (!isSubscribed) {
    alert("Please take subscription to start chat");
    return;
  }

  document.getElementById("chatUser").innerText = name;
  document.getElementById("chatBox").style.display = "flex";
  document.getElementById("chatBody").innerHTML = "";
}

function closeChat() {
  document.getElementById("chatBox").style.display = "none";
}

function sendMessage() {
  const input = document.getElementById("chatInput");
  if (input.value.trim() === "") return;

  const msg = document.createElement("div");
  msg.innerText = "You: " + input.value;
  msg.style.marginBottom = "6px";

  document.getElementById("chatBody").appendChild(msg);
  input.value = "";
}
