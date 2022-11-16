class Magician {

  constructor(newName, newPower) {
    this.name = newName;
    this.power = newPower;
  }

  get config() {
    console.log("Power of " + this.name + " is: " + this.power);
  }
}

const magician = new Magician("Jhonny Man", "Lund Chuswana");
const magica = new Magician("Adria Kamini", "Choot Chatwana");

magician.config;
magica.config